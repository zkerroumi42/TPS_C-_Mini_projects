#ifndef CERCLE_H
#define CERCLE_H

#include"forme.h"


class Cercle : public Forme
{
    private:
        float rayon;
    public:
        Cercle();
        Cercle(float);
        virtual ~Cercle();
        void description();
        double aire();
        void affichageDesc(Forme&);



};

#endif // CERCLE_H
