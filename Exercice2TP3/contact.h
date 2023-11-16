#ifndef CONTACT_H
#define CONTACT_H
using namespace std;
#include<iostream>
#include<cstring>

class contact
{
public:

    virtual ~contact();

    void SetageContact(int val)
    {
        if (val<60 && val>18) ageContact = val;
        else cout<<"l'age doit compris entre 18 et 60"<<endl;
    }
    void SetmsgContact(char *val)
    {
        msgContact =new char[strlen(val)+1];
        strcpy(msgContact,val);
    }
    contact(char*,int);
    contact(contact&);
    static int cpt;
    void afficher();


protected:
    int numContact;
    int ageContact;
    char *nomContact;
    char *msgContact;

private:
};

#endif // CONTACT_H
