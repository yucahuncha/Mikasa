#include <QLayout>
#include <QWidget>
#include <QRect>
#include <QStyle>
#include <QWidgetItem>

class QFlowLayout : public QLayout {
public:
    QFlowLayout(QWidget *parent = nullptr, int margin = 0, int hSpacing = -1, int vSpacing = -1);
    ~QFlowLayout();

    void addItem(QLayoutItem *item) override;
    int horizontalSpacing() const;
    int verticalSpacing() const;
    int count() const override;
    QLayoutItem *itemAt(int index) const override;
    QLayoutItem *takeAt(int index) override;
    QSize minimumSize() const override;
    QSize sizeHint() const override;
    void setGeometry(const QRect &rect) override;

private:
    int doLayout(const QRect &rect, bool testOnly) const;
    int smartSpacing(QStyle::PixelMetric pm) const;

    QList<QLayoutItem *> itemList;
    int m_hSpace;
    int m_vSpace;
};

// Implementation of QFlowLayout methods
QFlowLayout::QFlowLayout(QWidget *parent, int margin, int hSpacing, int vSpacing)
        : QLayout(parent), m_hSpace(hSpacing), m_vSpace(vSpacing) {
    setContentsMargins(margin, margin, margin, margin);
}

QFlowLayout::~QFlowLayout() {
    QLayoutItem *item;
    while ((item = takeAt(0))) {
        delete item;
    }
}

void QFlowLayout::addItem(QLayoutItem *item) {
    itemList.append(item);
}

int QFlowLayout::horizontalSpacing() const {
    return m_hSpace >= 0 ? m_hSpace : smartSpacing(QStyle::PM_LayoutHorizontalSpacing);
}

int QFlowLayout::verticalSpacing() const {
    return m_vSpace >= 0 ? m_vSpace : smartSpacing(QStyle::PM_LayoutVerticalSpacing);
}

int QFlowLayout::count() const {
    return itemList.size();
}

QLayoutItem *QFlowLayout::itemAt(int index) const {
    return itemList.value(index);
}

QLayoutItem *QFlowLayout::takeAt(int index) {
    if (index >= 0 && index < itemList.size()) {
        return itemList.takeAt(index);
    }
    return nullptr;
}

QSize QFlowLayout::minimumSize() const {
    QSize size;
    for (QLayoutItem *item : itemList) {
        size = size.expandedTo(item->minimumSize());
    }
    return size + QSize(2 * margin(), 2 * margin());
}

QSize QFlowLayout::sizeHint() const {
    return minimumSize();
}

void QFlowLayout::setGeometry(const QRect &rect) {
    QLayout::setGeometry(rect);
    doLayout(rect, false);
}

int QFlowLayout::doLayout(const QRect &rect, bool testOnly) const {
    int x = rect.x();
    int y = rect.y();
    int lineHeight = 0;

    for (QLayoutItem *item : itemList) {
        QWidget *wid = item->widget();
        int spaceX = horizontalSpacing();
        int spaceY = verticalSpacing();
        int nextX = x + item->sizeHint().width() + spaceX;

        if (nextX > rect.right() && lineHeight > 0) {
            x = rect.x();
            y += lineHeight + spaceY;
            nextX = x + item->sizeHint().width() + spaceX;
            lineHeight = 0;
        }

        if (!testOnly) {
            item->setGeometry(QRect(QPoint(x, y), item->sizeHint()));
        }

        x = nextX;
        lineHeight = qMax(lineHeight, item->sizeHint().height());
    }
    return y + lineHeight - rect.y();
}

int QFlowLayout::smartSpacing(QStyle::PixelMetric pm) const {
    QObject *parent = this->parent();
    if (!parent) {
        return -1;
    } else if (parent->isWidgetType()) {
        return static_cast<QWidget *>(parent)->style()->pixelMetric(pm);
    } else {
        return static_cast<QLayout *>(parent)->spacing();
    }
}
