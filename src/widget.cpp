#include "../include/widget.hpp"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    label = new QLabel(this);
    setWindowTitle("QLabel");
    resize(500,300);
    label->setText("hi");
}

Widget::~Widget() {}
