#include "beaulivre.h"


beaulivre::~beaulivre()
{
}
beaulivre::beaulivre(const string&a,const string&b,int c,bool d=false):livre(a,b,c,d){
}

float beaulivre::calcul_prix(){
    return livre::calcul_prix()+30;

}
void beaulivre::affiche(){
livre::affiche();
}
