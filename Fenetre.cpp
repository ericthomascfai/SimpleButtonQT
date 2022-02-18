//
// Created by eric on 18/02/2022.
//

#include <QGridLayout>
#include <QMessageBox>
#include "Fenetre.h"
#include <QDebug>

Fenetre::Fenetre() {
    QGridLayout *mylayout=new QGridLayout(); //instanciation du gestionnaire de placement
    button1=new QPushButton("Button1", nullptr);
    button1->setObjectName("Button1");
    button2=new QPushButton("Button2",nullptr);
    button2->setObjectName("Button2");
    mylayout->addWidget(button1,0,0,Qt::AlignCenter);
    mylayout->addWidget(button2,1,1,Qt::AlignCenter);
    setLayout(mylayout);
    QObject::connect(button1,&QPushButton::clicked,this,&Fenetre::handleClick);
    QObject::connect(button2,&QPushButton::clicked,this,&Fenetre::handleClick);
}

void Fenetre::handleClick() {
    //qDebug()<<sender()->objectName();

    QMessageBox::information(this,"Vous avez cliqué",sender()->objectName());


}
