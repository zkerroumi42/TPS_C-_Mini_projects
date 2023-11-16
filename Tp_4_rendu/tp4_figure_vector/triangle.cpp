#include "triangle.h"
using namespace std;
#include<iostream>

triangle::triangle(){}
triangle::triangle(int a=0,int b=0):base(a),hauteur(b) {}
triangle::triangle(const triangle& t):base(t.base),hauteur(t.hauteur) {}

triangle::~triangle(){}

void triangle::affiche()
{
    cout<<"Ceci est un triangle de base :"<<base<<"est de hauteur :"<<hauteur<<"et de aire :"<<aire()<<endl;
}

figure* triangle::copie()
{
    return new triangle(*this);
}
double triangle::aire()
{
    return (base*hauteur)/2;
}

