#include "../include/widget.hpp"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    setWindowTitle("QLineEdit");
    resize(500, 300);
    lineEdit = new QLineEdit(this);
    lineEdit->setEchoMode(QLineEdit::Password);
}

Widget::~Widget() {}
