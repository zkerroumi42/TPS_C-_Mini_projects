#include <iostream>
#include <cstring>

using namespace std;

class Chaine {
    private:
        int longueur;
        char* adresse;
    public:
        Chaine() {
            longueur = 0;
            adresse = new char[1];
            adresse[0] = '\0';
        }
        Chaine(char* texte) {
            longueur = strlen(texte);
            adresse = new char[longueur + 1];
            strcpy(adresse, texte);
        }
        Chaine(const Chaine& ch) {
            longueur = ch.longueur;
            adresse = new char[longueur + 1];
            strcpy(adresse, ch.adresse);
        }
        ~Chaine() {
            delete[] adresse;
        }
        Chaine& operator=(const Chaine& ch) {
            if (this != &ch) {
                delete[] adresse;
                longueur = ch.longueur;
                adresse = new char[longueur + 1];
                strcpy(adresse, ch.adresse);
            }
            return *this;
        }
        bool operator==(const Chaine& ch) const {
            return strcmp(adresse, ch.adresse) == 0;
        }
        Chaine operator+(const Chaine& ch) const {
            Chaine nouvelle;
            nouvelle.longueur = longueur + ch.longueur;
            nouvelle.adresse = new char[nouvelle.longueur + 1];
            strcpy(nouvelle.adresse, adresse);
            strcat(nouvelle.adresse, ch.adresse);
            return nouvelle;
        }
        char operator[](int index) const {
            if (index >= 0 && index < longueur) {
                return adresse[index];
            } else {
                return '\0';
            }
        }
        friend ostream& operator<<(ostream& os, const Chaine& ch) {
            os << ch.adresse;
            return os;
        }

};
