#ifndef SEJOUR_H
#define SEJOUR_H
#include"optionvoyage.h"

class Sejour:public virtual optionVoyage
{
public:
    Sejour(string a,double b,int c,double d):optionVoyage(a,b),nb_nuit(c),prix_nuit(d) {}
    virtual ~Sejour() {}
    double prix()//prix sejour
    {
        return nb_nuit*prix_nuit + prix_forfaitaire;
    }


protected:
    int nb_nuit;
    double prix_nuit;//le prix par nuit

};

#endif // SEJOUR_H
