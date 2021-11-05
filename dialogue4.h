#ifndef DIALOGUE4_H
#define DIALOGUE4_H
#include <QMainWindow>
#include <QGridLayout>
#include <QVector>
#include <QPushButton>
#include <QLCDNumber>

class dialogue4 : public QWidget
{
    Q_OBJECT
public:
    dialogue4(QWidget *parent = nullptr);
    ~dialogue4();




 // Add you custom slots here

protected:
    void createWidgets();        //Function to create the widgets
    void placeWidget();         // Function to place the widgets
    void makeConnexions();      // Create all the connectivity

//events
protected:
    void keyPressEvent(QKeyEvent *e)override;     //Override the keypress events

private:
    QGridLayout *buttonsLayout; // layout for the buttons
    QVBoxLayout *layout;        //main layout for the button
    QVector<QPushButton*> digits;  //Vector for the digits
    QPushButton *enter;            // enter button

    QLCDNumber *disp;             // Where to display the numbers

};
#endif // DIALOGUE4_H
