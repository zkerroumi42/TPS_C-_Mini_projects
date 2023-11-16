
#include "carre.h"

using namespace std;
#include<iostream>

carre::carre() : cote(0) {}

carre::carre(float c) : cote(c) {}

carre::carre(const carre & c) : cote(c.cote) {}

carre::~carre() {}

void carre::affiche() {
  cout << "Ceci est un carre ! de cote :" << cote << " et de aire : " << aire() <<endl;
}

figure* carre::copie() {
    carre* c=new carre(*this);
    return c;
}

double carre::aire() {
    return cote * cote;
}
