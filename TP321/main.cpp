#include <iostream>
#include <string>

using namespace std;
class Contact {
  private:
    int numContact;
    string nomContact;
    int age_contact;
    string messageContact;

  public:
    // constructor with parameters
    Contact(string nom, int age) {
      static int nextNumContact = 1; // static variable to keep track of contact number
      numContact = nextNumContact++;
      nomContact = nom;
      age_contact = age;
      messageContact = "Pas de Message ...";
    }

    int getNumContact() const {
      return numContact;
    }
    string getNomContact() const {
      return nomContact;
    }
    int getage_contact() const {
      return age_contact;
    }
    string getmessageContact() const {
      return messageContact;
    }

    void setAge(int age) {
      if (age >= 18 && age <= 60) {
        age_contact = age;
      } else {
        cout << "Age must be between 18 and 60" << endl;
      }
    }

    void setMessage(string message) {
      messageContact = message;
    }

    void afficher() const {
      cout << "Numéro de contact : " << numContact << endl;
      cout << "Nom de contact : " << nomContact << endl;
      cout << "Age de contact : " << age_contact << endl;
      cout << "Message de contact : " << messageContact << endl;
    }
};

class ContactSal : public Contact {
  private:
    int matricule;
    double salaire;
    bool bonContact;

  public:

    ContactSal(string nom, int age, int mat, double sal) : Contact(nom, age) {
      matricule = mat;
      salaire = sal;
      bonContact = false;
    }

    void setBonContact() {
      bonContact = true;
      salaire *= 1.1; // inc salary by 10%
    }

    double calculSalaire() const {
      if (bonContact) {
        return salaire;
      } else {
        return salaire * 0.9; // decr salary by 10%
      }
    }

    void afficher() const {
      Contact::afficher(); // call base class function to display contact info
      cout << "Matricule : " << matricule << endl;
      cout << "Salaire : " << salaire << endl;
      cout << "Bon contact : " << (bonContact ? "oui" : "non") << endl;
    }

    friend ostream& operator<<(ostream& os, const ContactSal& c) {
      os << "Numéro de contact : " << c.getNumContact() << endl;
      os << "Nom de contact : " << c.getNomContact()<< endl;
      os << "Age de contact : " << c.getage_contact() << endl;
      os << "Message de contact : " << c.getmessageContact() << endl;
      os << "Matricule : " << c.matricule << endl;
      os << "Salaire : " << c.calculSalaire() << endl;
      os << "Bon contact : " << (c.bonContact ? "oui" : "non") << endl;
      return os;
    }
};
int main() {
    Contact c1("zakar",44);
    Contact c2("samir", 55);
    ContactSal cs1("walid", 66, 1234, 6000);
    ContactSal cs2("Ali", 77, 4321, 7000);

    c1.setAge(30);
    c1.setMessage("Bonjour!");

    cs1.setMessage("Je suis interesse par votre entreprise.");
    cs1.setBonContact();

    cout << "Contact 1 : " << endl;
    c1.afficher();
    cout << endl;

    cout << "Contact salarie 1 : " << endl;
    cs1.afficher();
    cout << endl;

    cout << "Affichage avec l'operateur << : " << endl;
    cout << cs2 << endl;

    return 0;
}


