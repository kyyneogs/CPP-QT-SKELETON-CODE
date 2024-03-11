#ifndef BUTTON_H
#define BUTTON_H
#include <QPushButton>
#include <QString>
#include <QGridLayout>

class Button : public QPushButton
{
    Q_OBJECT

private:
    int id;

public:
    Button(int, QWidget *parent = nullptr);
    ~Button();
};
#endif