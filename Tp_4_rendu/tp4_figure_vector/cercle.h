#ifndef CERCLE_H
#define CERCLE_H

#include "figure.h"


class cercle : public figure
{
public:
    cercle();
    cercle(int);
    cercle(const cercle&);
    virtual ~cercle();
    void affiche();
    figure* copie();
    double aire();


private:
    int rayon;
};

#endif // CERCLE_H
