//
// Created by eric on 18/02/2022.
//

#include <QGridLayout>
#include "Fenetre.h"

Fenetre::Fenetre() {
    QGridLayout *mylayout=new QGridLayout(); //instanciation du gestionnaire de placement
    button1=new QPushButton("Button1", nullptr);
    button2=new QPushButton("Button2",nullptr);
    mylayout->addWidget(button1,0,0,Qt::AlignCenter);
    mylayout->addWidget(button2,1,1,Qt::AlignCenter);
    setLayout(mylayout);

}
