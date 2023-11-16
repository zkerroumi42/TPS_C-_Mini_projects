#ifndef TRIANGLE_H
#define TRIANGLE_H

#include "figure.h"


class triangle : public figure
{
    public:
        triangle();
        triangle(int,int);
        triangle(const triangle& );
        virtual ~triangle();
    void affiche();
    figure* copie();
    double aire();

    private:
        int base;
        int hauteur;
};

#endif // TRIANGLE_H
