#ifndef PERSONNEL_H
#define PERSONNEL_H
#include<vector>
#include"employer.h"
#include<iostream>
using namespace std;

class Personnel
{
    public:
        Personnel();
        virtual ~Personnel();
        void ajouter_employe(Employer*);
        void calculer_salaire();
        double salaire_moyen();
        void licience();

    private:
        vector<Employer*> list_emp;
};

#endif // PERSONNEL_H
