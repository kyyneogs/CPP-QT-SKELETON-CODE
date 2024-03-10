#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QMenu>
#include <QPushButton>

class Widget : public QWidget
{
    Q_OBJECT

private:
    QMenu *menu;
    QPushButton *btn;

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();
};
#endif // WIDGET_H
