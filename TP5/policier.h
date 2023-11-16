#ifndef POLICIER_H
#define POLICIER_H

#include "roman.h"


class policier : public roman
{
    public:
        policier(const string &,const string&,int ,bool,bool);
        virtual ~policier();
        float calcul_prix();


};

#endif // POLICIER_H
