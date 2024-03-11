#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <button.hpp>

class Widget : public QWidget
{
    Q_OBJECT

private:
    Button *btnBundle[9];

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

public slots:
    void OnClicked();
};
#endif // WIDGET_H
