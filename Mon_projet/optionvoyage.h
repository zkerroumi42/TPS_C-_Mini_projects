#ifndef OPTIONVOYAGE_H
#define OPTIONVOYAGE_H

#include <iostream>
#include <string>
using namespace std;

class optionVoyage: virtual public Affichable
{

    public:
        optionVoyage(string a,double b):nom(a),prix(b){}
        virtual ~optionVoyage(){}

        string nom() { return nom; }
       // void Setnom(string val) { nom = val; }
        double prix() { return prix; }
        //void Setprix(double val) { prix = val; }
        void affiche(ostream & out){
          out<<"<"<<nom()<<"> ->"<<"<"<<prix()<<">  MAD" <<endl;
        }


    protected:
        string nom;
        double prix_forfaitaire;
};

#endif // OPTIONVOYAGE_H
