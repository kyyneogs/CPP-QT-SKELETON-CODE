#include "../include/widget.hpp"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    setWindowTitle("QPushButton");
    resize(500, 300);
    btn = new QPushButton(this);
    btn->setText("this is btn");
    
}

Widget::~Widget() {}
