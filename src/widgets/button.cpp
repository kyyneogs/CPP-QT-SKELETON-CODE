#include <button.hpp>

Button::Button(int id, QWidget *parent)
    : QPushButton(parent)
{
    this->id = id;
    this->setText(QString::number(this->id));
    this->setFixedSize(200,200);
}

Button::~Button()
{

}