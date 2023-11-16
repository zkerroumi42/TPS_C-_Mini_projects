
#include "cercle.h"

using namespace std;
#include"math.h"
cercle::cercle() : rayon(0) {}

cercle::cercle(int c) : rayon(c) {}

cercle::cercle(const cercle & c) : rayon(c.rayon) {}

cercle::~cercle() {}

void cercle::affiche() {
  cout << "Ceci est un cercle ! de rayon :" << rayon << " et de aire : " << aire() <<endl;
}

figure* cercle::copie() {
    cercle* c=new cercle(*this);
    return c;
}

double cercle::aire() {
    return M_PI*rayon * rayon;
}
