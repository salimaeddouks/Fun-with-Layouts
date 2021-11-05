#ifndef DIALOQUE_H
#define DIALOQUE_H
#include<QWidget>
 #include<QLabel>
#include<QLineEdit>
#include<QTextEdit>
#include<QPushButton>


class dialogue :public QWidget
{
public:
    explicit dialogue(QWidget *parent=nullptr);
protected:
    void createWidgets();
    void placeWidgets();
    void makeConnexions();

protected:
 QLineEdit *edit1;
 QLineEdit *edit2;

 QLineEdit *edit3;

 QLineEdit *edit4;
 QLineEdit *edit5;

 QTextEdit *edit6;

 QLineEdit *edit7;
 QPushButton *button1;
 QPushButton *button2;
 QPushButton *button3;




};

#endif // DIALOQUE_H
