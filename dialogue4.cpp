#include "dialogue4.h"
#include <QKeyEvent>
#include <QApplication>


dialogue4::dialogue4(QWidget *parent)
    : QWidget(parent)
{
    createWidgets();
    placeWidget();
    makeConnexions();

}

dialogue4::~dialogue4()
{
    delete disp;
    delete layout;
    delete buttonsLayout;
}


void dialogue4::createWidgets()
{
    //Creating the layouts
    layout = new QVBoxLayout();
    layout->setSpacing(2);

    //grid layout
    buttonsLayout = new QGridLayout;


    //creating the buttons





   for(int  i=6; i<10; i++)
    {
        digits.push_back(new QPushButton(QString::number(i)));
        digits.back()->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        digits.back()->resize(sizeHint().width(), sizeHint().height());
    }

   for(int  i=4; i<7; i++)
    {
        digits.push_back(new QPushButton(QString::number(i)));
        digits.back()->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        digits.back()->resize(sizeHint().width(), sizeHint().height());
    }for(int  i=1; i<4; i++)
   {
       digits.push_back(new QPushButton(QString::number(i)));
       digits.back()->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
       digits.back()->resize(sizeHint().width(), sizeHint().height());
   }

    //enter button
    enter = new QPushButton("Enter");
    enter->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
    enter->resize(sizeHint().width(), sizeHint().height());



    //creating the lcd
    disp = new QLCDNumber();
    disp->setDigitCount(6);

  digits[0]=new QPushButton("0");
}

void dialogue4::placeWidget()
{

    layout->addWidget(disp);
    layout->addLayout(buttonsLayout);


    //adding the buttons

    for(int j=0; j <10; j++){

        buttonsLayout->addWidget(digits[j], (j-1)/3, (j-1)%3);


    }

    //Adding the 0 button
   buttonsLayout->addWidget(digits[0], 3, 0);
    buttonsLayout->addWidget(enter, 3, 1, 1,2);

buttonsLayout->setRowMinimumHeight(0,80);


    setLayout(layout);
}

void dialogue4::makeConnexions()
{
}


void dialogue4::keyPressEvent(QKeyEvent *e)
{
    //Exiting the application by a click on space
    if( e->key() == Qt::Key_Escape)
        qApp->exit(0);



}


