#include <iostream>
#include <string>
#include "livre.h"
#include "roman.h"
#include"beaulivre.h"
#include"policier.h"
#include"librairie.h"

using namespace std;

int main()

{
    policier p1("Le chien des Baskerville", "A.C.Doyle", 221, false, false);
    cout << "Policier 1" << endl;
    p1.affiche();
   // cout << "Prix: " << p1.calcul_prix() << endl;

    policier p2("Le Parrain", "A.Cuso", 367, true,false);
    cout << "policier 2" << endl;
    p2.affiche();


    roman r1("Le baron perché", "I. Calvino",  283, false, false);
    cout << "Roman 1" << endl;
    r1.affiche();
   // cout << "Prix: " << r1.calcul_prix() << endl;
    roman r2(" Mémoires de géronimo", "S.M. barrett",  173, false, true);
    cout << "Roman 2" << endl;
    r2.affiche();

    beaulivre bl1("Fleuves d'europe", "C. Osborne", 150, false);
    cout << "Beau livre 1" << endl;
    bl1.affiche();

    cout<<"************librairie***********"<<endl;

    livre* r,*p,*bl;

    r=&r1;
    p=&p1;
    bl=&bl1;


    librairie lib;
    lib.ajouter_livre(r);
    lib.ajouter_livre(p);
    lib.ajouter_livre(bl);
    lib.affiche();



}
