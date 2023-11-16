#ifndef DESSIN_H
#define DESSIN_H
#include<vector>

#include"figure.h"

#include<iostream>
using namespace std;
class dessin
{
     private:
          vector<figure*> figures;
          vector<figure*>::iterator it;
    public:

        dessin();
       /* dessin( dessin& dess) {
       for (size_t i = 0; i < figures.size(); i++) {
           figures[i]=dess.figures[i];
    }
}*/

        virtual ~dessin();
        void ajouteFigure( figure& );
        void affiche() ;

    protected:


};

#endif // DESSIN_H
