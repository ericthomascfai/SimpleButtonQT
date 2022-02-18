//
// Created by eric on 18/02/2022.
//

#ifndef SIMPLEBUTTONQT_FENETRE_H
#define SIMPLEBUTTONQT_FENETRE_H
#include <QtWidgets/QFrame>
#include <QtWidgets/QPushButton>
class Fenetre:public QFrame {
Q_OBJECT;
private:
    QPushButton *button1;
    QPushButton *button2;

public:
    Fenetre();
public slots:
    void handleClick();

};


#endif //SIMPLEBUTTONQT_FENETRE_H
