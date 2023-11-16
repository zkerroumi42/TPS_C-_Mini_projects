#ifndef LIVRE_H
#define LIVRE_H
#include<string>
#include<iostream>
using namespace std;

class livre
{
    public:
        livre(const string &,const string &, int ,bool );
        virtual ~livre();
        virtual float calcul_prix();
        virtual void affiche();
    protected:

    protected:
        string titre;
        string auteur;
        int nbpages;
        bool statu;
};

#endif // LIVRE_H
