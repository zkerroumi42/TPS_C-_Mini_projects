#ifndef EMPLOYER_H
#define EMPLOYER_H
using namespace std;
#include<string>

class Employer
{
public:
    Employer(string prenom,string nom,int age,string date):nom(nom),prenom(prenom),age(age),date(date)
    {}
    virtual ~Employer() {}
    virtual double calculer_salaire() const =0;
    virtual string get_nom() const ;

private:
    string nom;
    string prenom;
    int age;
    string date;
};
#endif // EMPLOYER_H
