#ifndef ROMAN_H
#define ROMAN_H

#include "livre.h"
#include<iostream>
#include<string>

using namespace std ;

class roman : public livre
{
    public:
        roman(const string &,const string &,int ,bool ,bool);
        virtual ~roman();
        void affiche();
        float calcul_prix();

    protected:
        bool statubio;
};

#endif // ROMAN_H
