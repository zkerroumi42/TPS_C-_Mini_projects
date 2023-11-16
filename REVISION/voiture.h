#ifndef VOITURE_H
#define VOITURE_H

#include "Vehicule.h"


class Voiture : public Vehicule
{
    public:
        Voiture(char *,char *,int,float,int);
        Voiture(const Voiture &);
        void afficher();
        virtual ~Voiture();
        void setNP(int);
        int getNP();
         static int  nbvoiture;

    protected:

    private:
        int nbrePlace;

};

#endif // VOITURE_H
