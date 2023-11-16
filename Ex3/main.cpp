#include <iostream>
#include "Chaine.h"

using namespace std;

int main() {
    Chaine ch1; // Chaîne vide
    Chaine ch2("Bonjour"); // Chaîne initialisée avec un texte
    Chaine ch3 = ch2; // Constructeur par recopie
    Chaine ch4(" le monde !");

    cout << "ch1 : " << ch1 << endl;
    cout << "ch2 : " << ch2 << endl;
    cout << "ch3 : " << ch3 << endl;

    ch1 = ch2;
    cout << "ch1 : " << ch1 << endl;

    if (ch2 == ch3) {
        cout << "ch2 et ch3 sont égales" << endl;
    }

    Chaine ch5 = ch2 + ch4;
    cout << "ch5 : " << ch5 << endl;

    cout << "ch5[0] = " << ch5[0] << endl;
    cout << "ch5[6] = " << ch5[6] << endl;
    cout << "ch5[13] = " << ch5[13] << endl;
    cout << "ch5[14] = " << ch5[14] << endl;

    return 0;
}
