#include <iostream>
#include"vehicule.h"
#include"voiture.h"


using namespace std;

 main()
{


    Vehicule v1("A-1234","BMW",2020,5000);
    Vehicule v2(v1);
    v2.afficher();
    Voiture v3("1234-A-50","Marqx",2007,15000,6);
    Voiture v4(v3);
    v4.afficher();
    cout<<"nombre de voitures cree:"<<Voiture::nbvoiture<<endl;

    v3.setNP(10);
    int nb=v3.getNP();
    v3.afficher();
    cout<<"nb :"<<nb<<endl;


    v1.afficher();


    v1.setPrixHT(100000);
    int a=v1.getPrixTTC();
    v1.afficher();
    cout<<"prix :"<<a<<endl;



}
