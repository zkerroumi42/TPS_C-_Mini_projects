#include "voiture.h"
using namespace std;
#include<iostream>
int Voiture::nbvoiture=0;
Voiture::Voiture(char *a,char *b,int c,float d,int e):Vehicule(a,b,c,d),nbrePlace(e)
{
nbvoiture++;
}
Voiture::Voiture(const Voiture & v):Vehicule(v.Matricule,v.Marque,v.AnneModele,v.PrixHT),nbrePlace(v.nbrePlace){
nbvoiture++;
}
Voiture::~Voiture()
{
nbvoiture--;
}
void Voiture::afficher(){
    Vehicule::afficher();
    cout<<"nombre de Place :"<<nbrePlace<<endl;
}
void Voiture::setNP(int a){
    nbrePlace=a;
}
int Voiture::getNP(){
    return nbrePlace;
}
