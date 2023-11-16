#include "dessin.h"

dessin::dessin()
{
    //ctor
}

dessin::~dessin()
{
    for (size_t i=0; i<figures.size() ; i++ )
    {
        delete figures[i];
    }
}


void dessin::ajouteFigure( figure& f)
{

       figures.push_back(f.copie());

}
void dessin::affiche() {
    //for (size_t i = 0; i < figures.size(); i++) {
     //   figures[i]->affiche();}


    // for(figure*f :figures){
     //   f->affiche();
    // }
    /* afficher par un iterator*/
    for(it=figures.begin();it!=figures.end();++it){
        (*it)->affiche();
    }


}
