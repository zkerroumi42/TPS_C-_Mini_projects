#include "contact.h"
#include<Cstring>

int contact::cpt=0;
contact::~contact()
{
 cpt--;
 delete [] nomContact;
 delete [] msgContact;

}

contact::contact(char*a,int b=18):ageContact(b){
    cpt++;
    numContact=cpt;
    nomContact=new char[strlen(a)+1];
    strcpy(nomContact,a);
    msgContact=new char[200];
    strcpy(msgContact,"Pas de message!");

}
contact::contact(contact& c):nomContact(c.nomContact),msgContact(c.msgContact),ageContact(c.ageContact)
{
    cpt++;
    c.numContact=cpt;
    numContact=c.numContact;


}
void contact::afficher(){
    cout<<"Numero :"<<numContact<<endl;
     cout<<"Nom :"<<nomContact<<endl;
      cout<<"Age :"<<ageContact<<endl;
       cout<<"Message :"<<msgContact<<endl;
}
