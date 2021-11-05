&#include "poly.h"
#include<QHBoxLayout>
#include<QVBoxLayout>

poly::poly(QWidget *parent):QWidget(parent){

    createWidgets();

    placeWidgets();


     makeConnexions();
}

void poly:: createWidgets(){

    label = new QLabel("Name:");
    edit = new QLineEdit;
    search = new QPushButton("Search");
    close = new QPushButton("Close");
    box1=new QCheckBox("Mach case");
    box2=new QCheckBox("Search Backward");
}

void poly::placeWidgets(){
    QHBoxLayout *mainH= new QHBoxLayout;
    QVBoxLayout *main1V=new QVBoxLayout;
    QVBoxLayout *main2V=new QVBoxLayout;

    main2V->setSpacing(1);





     this->setLayout(mainH);
    this->setLayout(main1V);
    this->setLayout(main2V);
    QHBoxLayout * childH= new QHBoxLayout;

    QVBoxLayout *child1V = new QVBoxLayout;
    QVBoxLayout *child2V = new QVBoxLayout;


   childH->addWidget(label);
   childH->addWidget(edit);
   main1V->addLayout(childH);

  child1V->addWidget(box1);
  child1V->addWidget(box2);


  main1V->addLayout(child1V);

  child2V->addWidget(search);
  child2V->addWidget(close);

  main2V->addLayout(child2V);

  main2V->addStretch(7);
  main2V->addSpacerItem(new QSpacerItem(200, 50));

  mainH->addLayout(main1V);
  mainH->addLayout(main2V);





}

void poly::makeConnexions(){

}
