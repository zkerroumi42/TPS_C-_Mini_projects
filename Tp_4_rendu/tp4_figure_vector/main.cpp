
#include"carre.h"
#include"figure.h"
#include"cercle.h"
#include"triangle.h"
#include"dessin.h"
void unCercleDePlus(dessin const& img)
{
 dessin tmp(img);
 cercle c(1);
 tmp.ajouteFigure(c);
 cout << "Affichage de 'tmp': " << endl;
 tmp.affiche();
}
int main() {
    carre c1(2);
    carre c4(c1);
    cercle c2(3);
    triangle t(4,4);

    c1.affiche();
    c2.affiche();
    t.affiche();

    figure* f1 = c1.copie();
    figure* f2 = c2.copie();
    figure* f3 =t.copie();

    f1->affiche();
    f2->affiche();
    f3->affiche();
    //*******************
dessin dess;
 dess.ajouteFigure(c4);
 unCercleDePlus(dess);
 dess.ajouteFigure( c2);
 dess.ajouteFigure(t);
 dess.ajouteFigure(t);
 cout << endl << "Affichage du dessin : " << endl;
 dess.affiche();



    delete f1;
    delete f2;
    delete f3;
    return 0;
}
