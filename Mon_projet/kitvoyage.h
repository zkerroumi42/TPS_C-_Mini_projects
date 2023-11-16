#ifndef KITVOYAGE_H
#define KITVOYAGE_H

#include <vector>
#include <iostream>
#include <string>
using namespace std;


class KitVoyage
{
public:
    KitVoyage(string dest,string dep):destination(dest),depart(dep) {}
    virtual ~KitVoyage() {}
    void ajouter_option(optionVoyage *op)
    {
        list_kv.push_back(op);
    }
    double prix()
    {
        double somme=0;
        for(int i=0; i<list_kv.size(); i++)
        {
            somme+=list_kv[i]->prix();

        }
        return somme;
    }
    void annuler()
    {
          for(int i=0; i<list_kv.size(); i++){
                    delete list_kv[i];
          }
        list_kv.clear();
    }
    void affiche(ostream & out){
        out<<"Voyage de <"<<depart<<"> a <"<<destination<<"> avec pour options :"<<endl;
        optionVoyage::affiche(out);
        out<<"Prix total :<"<<prix()<<"> MAD"<<endl;
        out<<" "<<endl;

    }


private:
    string depart;
    string destination;
    vector<const optionVoyage*> list_kv;
};

#endif // KITVOYAGE_H
