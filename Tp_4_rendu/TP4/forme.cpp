#include "forme.h"

#include<iostream>
using namespace std;
Forme::Forme()
{
   cout<<"cond"<<endl;
}

Forme::~Forme()
{
    //dtor
}
 void Forme::description()
{

    cout<<"Ceci est une forme !"<<endl;

}


void affichageDesc(Forme& f)
{
    f.description();

}
