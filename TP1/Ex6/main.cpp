#include"point3D.h"
using namespace std ;
#include <cmath>




main()
{
    point3D a(5,2,3) ;
    point3D b(5,2,3) ;
    point3D c(3,2,3);

    a.affiche () ;
    b.affiche () ;
    c.affiche () ;
    a.compare(b);
    a.compare(c);


}
//appel du destructeur par defaut
