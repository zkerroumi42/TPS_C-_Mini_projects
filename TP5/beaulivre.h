#ifndef BEAULIVRE_H
#define BEAULIVRE_H

#include "livre.h"


class beaulivre : public livre
{
    public:
        beaulivre(const string &,const string &,int ,bool);
        virtual ~beaulivre();
        float calcul_prix();
        void affiche();

};

#endif // BEAULIVRE_H
