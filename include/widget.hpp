#ifndef WIDGET_H
#define WIDGET_H

#include <string>
#include <QWidget>
#include <QPushButton>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QGridLayout>

class Widget : public QWidget
{
    Q_OBJECT

private:
    QPushButton *btn[4];
    QHBoxLayout *hbox;
    QGridLayout *gbox;
    QVector<QPushButton *> vect;

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();
};
#endif // WIDGET_H
