#include <iostream>
#include <string>

using namespace std;
class Vehicule
{
protected :
    string matricule;
    string marque;
    int AnneeModele ;
    float prixHT;

public :
    Vehicule(const string& matricule, const string& marque, int AnneeModele, float prixHT)
        :AnneeModele(AnneeModele), prixHT(prixHT),matricule(matricule),marque(marque) {}
    void afficher() const
    {
        cout << "Matricule : " << matricule <<endl
             << "Marque : " << marque <<endl
             << "AnneeModele : " << AnneeModele <<endl
             << "Prix HT : " << prixHT <<endl;
    }
};

class Voiture : public Vehicule
{
public:
    Voiture(const string& matricule, const string& marque, int AnneeModele, float prixHT, int nbrePlace)
        : Vehicule(matricule, marque, AnneeModele, prixHT), nbrePlace(nbrePlace)
    {
        nbreVoitures++;
    }

    Voiture(const Voiture& c): Vehicule(c.matricule, c.marque, c.AnneeModele, c.prixHT), nbrePlace(c.nbrePlace)
    {
        nbreVoitures++;
    }

    void afficher() const
    {
        Vehicule::afficher();
        cout << "Nombre de places : " << nbrePlace <<endl;
    }

    static int nbreVoitures;

private:
    int nbrePlace;
};

int Voiture::nbreVoitures = 0;

int main()
{
    Voiture v1("2222-A-20", "BMW", 2018, 220000, 5);
    v1.afficher();
    cout << "Nombre de voitures creees : " << Voiture::nbreVoitures <<endl;

    Voiture v2(v1);
    cout << "v2 : " <<endl;
    v2.afficher();
    cout << "Nombre de voitures creees : " << Voiture::nbreVoitures <<endl;

}
