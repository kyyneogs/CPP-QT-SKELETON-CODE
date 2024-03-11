#include "../include/widget.hpp"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    setWindowTitle("QLayout");
        
    for(int i=0; i<4; i++){
        std::string s = "It is Num ";
        btn[i] = new QPushButton(this);
        s += std::to_string(i+1);
        btn[i]->setText(s.c_str());
        btn[i]->setFixedSize(200, 200);
    }

    gbox = new QGridLayout(this);
    for(int i=0; i<2; i++){
        for(int j=0; j<2;j++){
            gbox->addWidget(btn[2*i+j], i, j);
        }
    }
}

Widget::~Widget() {}
