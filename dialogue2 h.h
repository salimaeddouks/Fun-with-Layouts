#ifndef POLY_H
#define POLY_H

#include<QWidget>
#include<QPushButton>
#include<QLabel>
#include<QLineEdit>
#include<QCheckBox>


class poly :public QWidget
{
public:
    explicit poly(QWidget *parent=nullptr);
protected:
    void createWidgets();
    void placeWidgets();
    void makeConnexions();

protected:
  QLabel *label;
  QLineEdit *edit;
  QPushButton *search;
  QPushButton *close;
  QCheckBox * box1;
  QCheckBox * box2;





};


#endif // POLY_H
