#include "contactsal.h"

contactSal::contactSal(char *a,int b,int c,float d):contact(a,b),matricule(c),salaire(d),bonContact(false)
{
}

contactSal::~contactSal()
{
}

void contactSal::setbonContact()
{
    bonContact=true;
}
float contactSal::calculSalaire()
{
    if(bonContact) return salaire*1.1;
    else return salaire;
}
void contactSal::afficher()
{
    contact::afficher();
    cout<<"Matricule :"<<matricule<<endl;
    cout<<"Salaire :"<<calculSalaire()<<endl;
    cout<<"Est un bon contact :"<<(bonContact ? "oui":"non")<<endl;


}
ostream & operator <<(ostream& out,contactSal & c )
{
    out<<"Numero :"<<c.numContact<<endl;
     out<<"Nom :"<<c.nomContact<<endl;
      out<<"Age :"<<c.ageContact<<endl;
       out<<"Message :"<<c.msgContact<<endl;
       out<<"Matricule :"<<c.matricule<<endl;
       out<<"Salaire :"<<c.calculSalaire()<<endl;
      out<<"Est un bon contact :"<<(c.bonContact ? "oui":"non")<<endl;
}

