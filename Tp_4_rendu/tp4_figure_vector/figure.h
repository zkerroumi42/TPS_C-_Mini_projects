
#ifndef FIGURE_H
#define FIGURE_H

#include <iostream>

class figure {
public:

    virtual ~figure() {}
    virtual void affiche() = 0;
    virtual figure* copie() = 0;
    virtual double aire() = 0;
};

#endif // FIGURE_H


