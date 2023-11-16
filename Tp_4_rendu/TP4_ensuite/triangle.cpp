#include "triangle.h"

#include<iostream>
using namespace std ;


triangle::triangle():base(0),hauteur(0){}

triangle::triangle(float a, float b ):base(a),hauteur(b){}

triangle::~triangle(){}



void triangle::description()
{
    cout<<"Ceci est un triangle !"<<endl;
    cout<<"aire :"<<triangle::aire()<<endl;
}

double triangle::aire(){

  // calculer air d'une cercle

    return (base*hauteur)/2;

}

void triangle::affichageDesc(Forme& f)
{
    f.description();

}
