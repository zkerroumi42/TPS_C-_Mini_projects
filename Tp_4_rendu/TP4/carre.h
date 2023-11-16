#ifndef CARRE_H
#define CARRE_H

#include "figure.h"

class carre : public figure {
private:
    int cote;

public:
    carre();
    carre(int);
    carre(const carre&);
    virtual ~carre();
    void affiche();
    figure* copie(){ return new carre(*this);};
    double aire();
};

#endif // CARRE_H
