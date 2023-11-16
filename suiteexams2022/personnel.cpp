#include "personnel.h"

Personnel::Personnel()
{

}

Personnel::~Personnel()
{
    //dtor
}

void Personnel::ajouter_employe(Employer* emp)
{
    list_emp.push_back(emp);
}
void Personnel::calculer_salaire()
{
    for(int i=0;i<list_emp.size();i++){
        double calcul= list_emp[i]->calculer_salaire();
        cout<<calcul<<endl;
    }
}
double Personnel::salaire_moyen()
{
    double somme=0;
    for(int i=0;i<list_emp.size();i++){
        somme+=list_emp[i]->calculer_salaire();
    }
    return somme/list_emp.size();
}
void Personnel::licience(){
}
