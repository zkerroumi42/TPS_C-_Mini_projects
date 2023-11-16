#include <iostream>
#include <string>

using namespace std;

class Contact {
private:
    static int compteur; // compteur pour générer l'identifiant unique
    int numContact;
    string nomContact;
    int age_contact;
    string messageContact;
public:
    Contact(string nom, int age) : nomContact(nom), age_contact(age), messageContact("Pas de Message ...") {
        numContact = ++compteur; // incrémenter le compteur pour générer l'identifiant unique
    }
    void setAge(int age) {
        if (age >= 18 && age <= 60) {
            age_contact = age;
        }
    }
    void setMessage(string message) {
        messageContact = message;
    }
    void afficher() {
        cout << "Contact #" << numContact << ": " << nomContact << ", " << age_contact << " ans, message: " << messageContact << endl;
    }
};

int Contact::compteur = 0;

class ContactSal : public Contact {
private:
    int matricule;
    double salaire;
    bool bonContact;
public:
    ContactSal(string nom, int age, int mat, double sal) : Contact(nom, age), matricule(mat), salaire(sal), bonContact(false) {}
    void setBonContact() {
        bonContact = true;
        salaire *= 1.1; // augmentation du salaire de 10%
    }
    double calculSalaire() {
        return bonContact ? salaire : salaire * 0.9; // si bonContact est true, on retourne le salaire avec une augmentation de 10%, sinon on retourne le salaire sans augmentation
    }
    void afficher() {
        Contact::afficher();
        cout << "  Matricule: " << matricule << ", salaire: " << salaire << ", bon contact: " << (bonContact ? "oui" : "non") << endl;
    }
};

int main() {
    // créer 4 contacts
    Contact c1("Alice", 25);
    Contact c2("Bob", 30);
    ContactSal cs1("Claire", 40, 123, 3000.0);
    ContactSal cs2("David", 50, 456, 4000.0);

    // lire les attributs du premier contact
    int age;
    string message;
    cout << "Entrez l'age du contact #" << c1.numContact << ": ";
    cin >> age;
    c1.setAge(age);
    cout << "Entrez le message du contact #" << c1.numContact << ": ";
    cin.ignore(); // pour éviter de lire le caractère de retour à la ligne restant dans le buffer
    getline(cin, message);
    c1.setMessage(message);

    // afficher les contacts
    c1.afficher();
    c2.afficher();
    cs1.afficher();
    cs2.afficher();

    // tester la méthode setBonContact et calculSalaire pour cs1
    cs1.setBonContact();
    cout << "Le salaire de " << cs1.nomContact << " est " << cs1.calculSalaire() << endl;

    return 0;
}
