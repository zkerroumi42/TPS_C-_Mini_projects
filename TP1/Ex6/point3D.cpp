#include"point3D.h"
using namespace std ;
#include <cmath>


point3D::point3D (double a, double b,double c)
{
    x = a ;
    y = b ;
    z = c ;
}
point3D::~point3D ()
{
    cout << " Destructeur \n" ;
}

void point3D::affiche ()
{
    cout << "les cordonnees sont : (" << x << " ," << y <<" , " << z <<   ")\n" ;
}
void point3D::compare(point3D obj1)
{
    if(x==obj1.x && y==obj1.y && z==obj1.z)
    {
        cout<<"ce sont egaux"<<"\n" ;
    }
    else
    {
        cout<<"ce sont different"<<"\n" ;
    }
bool point3D::compare(point3D & p1,point3D &p2){

return ((p1.x==p2.x) &&( p1.y==p2.y )&& (p1.z==p2.z));

}

}
