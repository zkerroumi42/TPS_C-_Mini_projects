#include "roman.h"
#include<iostream>
#include<string>

using namespace std ;

roman::~roman()
{
    //dtor
}
roman::roman(const string & a,const string & b,int c,bool d,bool e=false):livre(a,b,c,d),statubio(e){
}

void roman::affiche(){
livre::affiche();
if(!statubio){
cout<<"ce roman ne pas une biographie"<<endl;
}else{
    cout<<"ce roman est une biographie"<<endl;
}
}
float roman::calcul_prix(){
     return livre::calcul_prix();
}

