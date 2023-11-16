#include <iostream>
#include"contact.h"
#include"contactsal.h"

using namespace std;

 main()
{
     char *nom,*a;
     int age,b;
    cout<<"saisir informations "<<endl;
    cin>>nom>>age;
    contact c1(nom,age);
    c1.afficher();
    contact c2(c1);
    c2.SetageContact(40);
    c2.SetmsgContact("Bonjouuuuuur");
    c2.afficher();

    cout<<"***********************"<<endl;
    contactSal cs1("Khalid", 24, 45123,1000);
    contactSal cs2("lamya",18,12345,4000);
    cs1.afficher();
    cs2.setbonContact();
    cout<<cs2;
}

