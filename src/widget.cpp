#include "../include/widget.hpp"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    setWindowTitle("QMenu");
    resize(500, 300);

    menu = new QMenu();
    btn = new QPushButton(this);
    menu->addMenu("Action");
    btn->setMenu(menu);
}

Widget::~Widget() {}
