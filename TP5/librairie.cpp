#include "librairie.h"

librairie::librairie()
{
    //ctor
}

librairie::~librairie()
{
   vider_stock();
}


 void librairie::ajouter_livre(livre*l){

 livers.push_back(l);

 }
void librairie::affiche(){
    for(it=livers.begin();it!=livers.end();++it){
        (*it)->affiche();
    }
}

void librairie::vider_stock(){
for(it=livers.begin();it!=livers.end();++it){
        delete (*it);
    }
}
