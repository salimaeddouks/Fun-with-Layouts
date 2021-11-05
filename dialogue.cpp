#include "dialogue.h"
#include <QFormLayout>
#include <QHBoxLayout>
#include <QVBoxLayout>
dialogue::dialogue(QWidget *parent) : QWidget(parent)
{
    this->setWindowTitle(" Report Bug");

    createWidgets();

    placeWidgets();


     makeConnexions();
}

void dialogue::createWidgets()
            {
               edit1=new QLineEdit;
               edit2=new QLineEdit;

               edit3=new QLineEdit;
               edit4=new QLineEdit;
               edit5=new QLineEdit;
               edit6=new QTextEdit;
               edit7=new QLineEdit;
               button1=new QPushButton("Reset");
               button2=new QPushButton("submit Bug Report");
               button3=new QPushButton("D'ont submit");


          }
void dialogue::placeWidgets(){

QHBoxLayout * layout=new QHBoxLayout;
layout->setSpacing(1);
QVBoxLayout * layout1=new QVBoxLayout;


QFormLayout *formLayout = new QFormLayout;
   formLayout->addRow(tr("Name"), edit1);
   formLayout->addRow(tr("Company"), edit2);
   formLayout->addRow(tr("Phone"), edit3);
   formLayout->addRow(tr("Email"), edit4);

   formLayout->addRow(tr("Problem Title"), edit5);

   formLayout->addRow(tr("Summary information"), edit6);

   formLayout->addRow(tr("Reproducibility"), edit7);

   //setLayout(formLayout);
   layout->addWidget(button1);

   layout->addSpacerItem(new QSpacerItem(200, 20));
   layout->addWidget(button2);

   layout->addWidget(button3);
    layout1->addLayout(formLayout);
    layout1->addLayout(layout);
    this->setLayout(layout1);




}
void dialogue::  makeConnexions(){

}

