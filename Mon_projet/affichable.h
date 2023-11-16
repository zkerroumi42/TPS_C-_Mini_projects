#ifndef AFFICHABLE_H
#define AFFICHABLE_H

#include <iostream>
#include <string>

using namespace std;
// une classe pour afficher
class Affichable
{
public:
    virtual void affiche(ostream& out) const = 0;
};
// ----------------------------------------------------------------------
ostream& operator<<(ostream& out, const Affichable& option)
{
    option.affiche(out);
    return out;
}

#endif // AFFICHABLE_H
