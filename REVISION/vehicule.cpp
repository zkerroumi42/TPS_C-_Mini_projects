#include "vehicule.h"
#include<Cstring>
#include <stdio.h>
#include "string.h"
using namespace std;
#include<iostream>
Vehicule::Vehicule(char * a,char * b,int c,float d):AnneModele(c),PrixHT(d)
{
    Matricule=new char[strlen(a)+1];
    strcpy(Matricule,a);
    Marque=new char[strlen(b)+1];
    strcpy(Marque,b);
}
Vehicule::Vehicule(const Vehicule & v):Matricule(v.Matricule),Marque(v.Marque),AnneModele(v.AnneModele),PrixHT(v.PrixHT)
{
}
Vehicule::~Vehicule()
{
    delete [] Matricule;
    delete [] Marque;
}
void Vehicule::afficher()
{
    cout<<"Matricule :"<<Matricule<<endl;
    cout<<"Marque :"<<Marque<<endl;
    cout<<"AnneModele :"<<AnneModele<<endl;
    cout<<"PrixHT :"<<PrixHT<<endl;
}
void Vehicule::setPrixHT(float e)
{
    PrixHT=e;
}
float Vehicule::getPrixTTC()
{
    return PrixHT*1.2;
}
