#include "forme.h"
#include "cercle.h"
#include <iostream>


using namespace std;

main()
{
    Forme f;
    Cercle c;
    f.description();
    c.description();
    /* Forme f2(c);
    f2.description();*/
    affichageDesc(f);
    affichageDesc(c);

}
