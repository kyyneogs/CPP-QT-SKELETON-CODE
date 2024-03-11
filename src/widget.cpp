#include <widget.hpp>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    int k=9;
    QGridLayout *lay = new QGridLayout(this);
    int tmpi=0;
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            btnBundle[tmpi] = new Button(tmpi+1, this);
            btnBundle[tmpi]->setProperty("id", tmpi+1);
            lay->addWidget(btnBundle[tmpi], i, j);
            connect(btnBundle[tmpi], SIGNAL(clicked(bool)), this, SLOT(OnClicked()));
            tmpi+=1;
        }
    } 
}

Widget::~Widget() {}

void Widget::OnClicked()
{
    int id = sender()->property("id").toInt();
    btnBundle[id-1]->setText("hello world!");
}