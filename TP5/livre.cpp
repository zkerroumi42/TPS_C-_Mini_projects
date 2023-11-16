#include "livre.h"
#include<iostream>
#include<string>

using namespace std ;
livre::livre(const string&a,const string&b,int c,bool d=false):titre(a),auteur(b),nbpages(c),statu(d)
{
}

livre::~livre()
{
}
float livre::calcul_prix(){
     float prix=0.3*nbpages;
    if(statu){
       return prix+50;
    }
    return prix;
}
void livre::affiche(){
       cout<<"Titre :"<<titre  <<endl;
       cout<<"Auteur :"<< auteur <<endl;
       cout<<"Nombre de pages :"<< nbpages <<endl;
       cout<<"Bestseller :"<< (statu? "oui" : "non") <<endl;
       cout<<"prix :"<<calcul_prix()<<endl;
}
