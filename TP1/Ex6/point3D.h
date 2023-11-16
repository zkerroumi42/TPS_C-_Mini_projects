#include <iostream>
using namespace std ;
#include <cmath>


class point3D
{
    double x, y,z;

public :

    point3D (double, double,double) ;
    ~point3D () ;
    double getX()
    {
        return x;
    }
    double getY()
    {
        return y;
    }
    double getz()
    {
        return z;
    }
    void setX(double a)
    {
        x=a;
    }
    void setY(double b)
    {
        x=b;
    }
    void setz(double c)
    {
        z=c;
    }
    void affiche();
    void compare(point3D);
    friend bool compare(const point3D &,const point3D &)

} ;

