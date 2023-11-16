#include "cercle.h"

#include<iostream>
using namespace std ;
#include<math.h>


Cercle::Cercle():rayon(0){}

Cercle::Cercle(float r):rayon(r){}

Cercle::~Cercle(){}


void Cercle::description()
{
    cout<<"Ceci est un cercle !"<<endl;
    cout<<"aire :"<<Cercle::aire();
}

double Cercle::aire(){

  // calculer air d'une cercle

    return M_PI*rayon*rayon;

}

void Cercle::affichageDesc(Forme& f)
{
    f.description();

}
