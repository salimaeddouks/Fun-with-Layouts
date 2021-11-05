#ifndef DIALOQUE_H
#define DIALOQUE_H
#include<QWidget>
#include<QPushButton>
#include<QLabel>
#include<QLineEdit>



class dialoque :public QWidget
{
public:
    explicit dialoque(QWidget *parent=nullptr);
protected:
    void createWidgets();
    void placeWidgets();
    void makeConnexions();

protected:
  QLabel *label;
  QLineEdit *edit;
  QPushButton *search;




};

#endif // DIALOQUE_H
