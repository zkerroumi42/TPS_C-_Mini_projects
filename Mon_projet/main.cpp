#include <vector>
#include <iostream>
#include <string>
#include"transport.h"
using namespace std;
int main()
{
 transport transp1("Trajet en train", 50.0);
 Transport transp2("Trajet en avion", 50.0, true);
 Sejour sejour1("Hotel 3* : Les amandiers ", 40.0, 5, 100.0);
 Sejour sejour2("Hotel 4* : Ambassador Plazza ", 100.0, 2, 250.0);
 OptionCombinee combi("Hotel 4* : Ambassador Plazza et trajet en avion", 100.0, 2,
250.0, true);
 KitVoyage kit1("Zurich", "Paris");
 kit1.ajouter_option(transp1);
 kit1.ajouter_option(sejour1);
 cout << kit1 << endl;
 KitVoyage kit2("Zurich", "New York");
 kit2.ajouter_option(transp2);
 kit2.ajouter_option(sejour2);
 cout << kit2 << endl;
 KitVoyage kit3("Zurich", "New York");
 kit3.ajouter_option(combi);
 cout << kit3 << endl;
 kit1.annuler();
 kit2.annuler();
 cout << kit1 << endl;
 cout << kit2 << endl;
}
