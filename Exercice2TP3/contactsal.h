#ifndef CONTACTSAL_H
#define CONTACTSAL_H

#include "contact.h"
using namespace std;

class contactSal : public contact
{
    public:
        contactSal(char *,int,int,float);
        virtual ~contactSal();
        void setbonContact();
        float calculSalaire();
        void afficher();
        friend ostream & operator <<(ostream &,contactSal & );

    protected:

    private:
        int matricule;
        float salaire;
        bool bonContact;
};

#endif // CONTACTSAL_H
