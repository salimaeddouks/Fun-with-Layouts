#include "dialoque.h"
#include "QHBoxLayout"
dialoque::dialoque(QWidget *parent) : QWidget(parent)
{
    createWidgets();

    placeWidgets();


     makeConnexions();
}


     void dialoque::createWidgets()
                 {
                     label = new QLabel("Name");
                     edit = new QLineEdit;
                     search = new QPushButton("Search");

               }
             void dialoque::placeWidgets()
             {
                 auto layout = new QHBoxLayout;
                 this->setLayout(layout);

                 layout->addWidget(label);
                 layout->addWidget(edit);
                 layout->addWidget(search);
             }
             void dialoque :: makeConnexions(){


             }



