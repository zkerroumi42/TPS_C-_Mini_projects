#ifndef TRANSPORT_H
#define TRANSPORT_H

#include "optionVoyage.h"


class transport : public virtual optionVoyage
{
    public:
        transport(string a,double b,bool c):optionVoyage(a,b),statu(false){}
        virtual ~transport{}
        double prix(){
           return ((statu ? TARIF_LONG:TARIF_BASE)+prix_forfaitaire);
        }
    protected:

    protected:
        bool statu;
        double prix_transp;
        double TARIF_LONG=1500.0;
        double TARIF_BASE=1500.0;


};

#endif // TRANSPORT_H
