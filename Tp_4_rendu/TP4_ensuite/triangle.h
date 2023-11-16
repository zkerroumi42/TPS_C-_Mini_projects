#ifndef TRIANGLE_H
#define TRIANGLE_H

#include"forme.h"
class triangle :public Forme
{
    private:
        float base;
        float hauteur;

    public:
        triangle();
        triangle(float,float );
        virtual ~triangle();
        void description();
        double aire();
        void affichageDesc(Forme&);



};

#endif // TRIANGLE_H
