
#include "carre.h"

using namespace std;
carre::carre() : cote(0) {}

carre::carre(int c) : cote(c) {}

carre::carre(const carre & c) : cote(c.cote) {}

carre::~carre() {}

void carre::affiche() {
  cout << "Ceci est un carre ! de cote :" << cote << " et de aire : " << aire() <<endl;
}



double carre::aire() {
    return cote * cote;
}
