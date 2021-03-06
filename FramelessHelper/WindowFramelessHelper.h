#ifndef WINDOWFRAMELESSHELPER_H
#define WINDOWFRAMELESSHELPER_H

#include <QQuickItem>
#include <QQmlParserStatus>

class WindowFramelessHelperPrivate;
class WindowFramelessHelper : public QObject, public QQmlParserStatus
{
    Q_OBJECT
    Q_DECLARE_PRIVATE(WindowFramelessHelper)

    Q_PROPERTY(int topDraggableMargin READ topDraggableMargin WRITE setTopDraggableMargin NOTIFY topDraggableMarginChanged)
    Q_PROPERTY(int leftDraggableMargin READ leftDraggableMargin WRITE setLeftDraggableMargin NOTIFY leftDraggableMarginChanged)
    Q_PROPERTY(int rightDraggableMargin READ rightDraggableMargin WRITE setRightDraggableMargin NOTIFY rightDraggableMarginChanged)
    Q_PROPERTY(int bottomDraggableMargin READ bottomDraggableMargin WRITE setBottomDraggableMargin NOTIFY bottomDraggableMarginChanged)

    Q_PROPERTY(int topMaximizedMargin READ topMaximizedMargin WRITE setTopMaximizedMargin NOTIFY topMaximizedMarginChanged)
    Q_PROPERTY(int leftMaximizedMargin READ leftMaximizedMargin WRITE setLeftMaximizedMargin NOTIFY leftMaximizedMarginChanged)
    Q_PROPERTY(int rightMaximizedMargin READ rightMaximizedMargin WRITE setRightMaximizedMargin NOTIFY rightMaximizedMarginChanged)
    Q_PROPERTY(int bottomMaximizedMargin READ bottomMaximizedMargin WRITE setBottomMaximizedMargin NOTIFY bottomMaximizedMarginChanged)

    Q_INTERFACES(QQmlParserStatus)

public:
    explicit WindowFramelessHelper(QObject *parent = Q_NULLPTR);
    virtual ~WindowFramelessHelper();

public:
    void classBegin() Q_DECL_FINAL;
    void componentComplete() Q_DECL_FINAL;

Q_SIGNALS:
    void topDraggableMarginChanged();
    void leftDraggableMarginChanged();
    void rightDraggableMarginChanged();
    void bottomDraggableMarginChanged();
public:
    void setTopDraggableMargin(int dm);
    void setLeftDraggableMargin(int dm);
    void setRightDraggableMargin(int dm);
    void setBottomDraggableMargin(int dm);
public:
    int topDraggableMargin() const;
    int leftDraggableMargin() const;
    int rightDraggableMargin() const;
    int bottomDraggableMargin() const;

Q_SIGNALS:
    void topMaximizedMarginChanged();
    void leftMaximizedMarginChanged();
    void rightMaximizedMarginChanged();
    void bottomMaximizedMarginChanged();
public:
    void setTopMaximizedMargin(int dm);
    void setLeftMaximizedMargin(int dm);
    void setRightMaximizedMargin(int dm);
    void setBottomMaximizedMargin(int dm);
public:
    int topMaximizedMargin() const;
    int leftMaximizedMargin() const;
    int rightMaximizedMargin() const;
    int bottomMaximizedMargin() const;

public:
    Q_INVOKABLE void addTitleBar(QQuickItem *w);
    Q_INVOKABLE void removeTitleBar(QQuickItem *w);
public:
    Q_INVOKABLE void setTitleBarHeight(int h);
    Q_INVOKABLE int titleBarHeight() const;

protected:
    QScopedPointer<WindowFramelessHelperPrivate> d_ptr;
};

#endif // WINDOWFRAMELESSHELPER_H
