#include <iostream>
using namespace std;

class Distributeur {
private:
    float sommeArgent;
public:
    Distributeur() {
        sommeArgent = 0;
    }
    void ajoutePiece(float x) {
        sommeArgent += x;
    }
    void delivreBoisson() {
        if (sommeArgent < 5) {
            cout << "Pas assez" << endl;
        } else {
            cout << "Voila" << endl;
            float rendu = sommeArgent - 5;
            if (rendu > 0) {
                cout << "Rendu : " << rendu << endl;
            }
            sommeArgent = 0;
        }
    }
};

class DistributeurMulti : public Distributeur {
private:
    int nbTypes;
    int typeSelectionne;
public:
    DistributeurMulti() : Distributeur() {
        nbTypes = 1;
        typeSelectionne = -1;
    }
    DistributeurMulti(int n) : Distributeur() {
        nbTypes = n;
        typeSelectionne = -1;
    }
    void selection(int t) {
        if (t >= 1 && t <= nbTypes) {
            typeSelectionne = t;
        } else {
            cout << "Erreur de selection" << endl;
        }
    }
    void delivreBoisson() {
        if (typeSelectionne == -1) {
            cout << "Selectionnez une boisson" << endl;
        } else {
            Distributeur::delivreBoisson();
            typeSelectionne = -1;
        }
    }
};

main() {
    Distributeur ds;
    DistributeurMulti dm;
    ds.ajoutePiece(1);
    ds.ajoutePiece(1);
    ds.ajoutePiece(1);
    ds.ajoutePiece(1);
    dm.ajoutePiece(2);
    dm.selection(3);
    ds.delivreBoisson();

}
