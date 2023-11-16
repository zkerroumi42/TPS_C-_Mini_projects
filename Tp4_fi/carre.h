#ifndef CARRE_H
#define CARRE_H

#include "figure.h"


class carre : public figure
{
    private:
        float cote;

    public:
        carre();
        carre(float);
        carre(const carre&);
        virtual ~carre();
        //fonctions ...
        void affiche();
        figure* copie();
        double aire();

    protected:


};

#endif // CARRE_H
