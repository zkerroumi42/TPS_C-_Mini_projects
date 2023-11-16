#include "cercle.h"

#include<iostream>
using namespace std ;
Cercle::Cercle()
{
    //ctor
}

Cercle::~Cercle()
{
    //dtor
}
void Cercle::description()
{
    cout<<"Ceci est un cercle !"<<endl;
}
void Cercle::affichageDesc(Forme& f)
{
    f.description();

}


