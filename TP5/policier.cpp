#include "policier.h"


policier::policier(const string &a,const string&b,int c,bool d,bool e):roman(a,b,c,d,e){
}
policier::~policier()
{
    //dtor
}


float policier::calcul_prix(){
return roman::calcul_prix()-10;
}
