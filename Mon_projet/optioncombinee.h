#ifndef OPTIONCOMBINEE_H
#define OPTIONCOMBINEE_H

#include "transport.h"


class optionCombinee : public transport,public Sejour
{
    public:
        optionCombinee(string a,double b,int c,bool d):transport(a,b,c),Sejour(a,b,c,d),optionVoyage(a,b){}  // statu du trajet initialisé par false
        virtual ~optionCombinee(){}
        double prix(){
        return (transport::prix()+Sejour::prix())*0.75;
        }


};

#endif // OPTIONCOMBINEE_H
