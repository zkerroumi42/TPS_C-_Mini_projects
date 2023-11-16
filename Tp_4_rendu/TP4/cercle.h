#ifndef CERCLE_H
#define CERCLE_H

#include"forme.h"


class Cercle : public Forme
{
    public:
        Cercle();
        virtual ~Cercle();

        void affichageDesc(Forme& f);

};

#endif // CERCLE_H
