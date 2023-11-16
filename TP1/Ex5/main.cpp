#include <iostream>
using namespace std ;
#include <cmath>


class cercle
{
    double x, y,r;

public :
    cercle();
    cercle (double, double,double) ;
    ~cercle () ;
    double getX()
    {
        return x;
    }
    double getY()
    {
        return y;
    }
    double getR()
    {
        return r;
    }
    void setX(double a)
    {
        x=a;
    }
    void setY(double b)
    {
        x=b;
    }
    void setR(double c)
    {
        r=c;
    }
    double surface ()const;
    void affiche () ;
    //fonction inline
    void setCentre(double m, double n)
    {
        x=m;
        y=n;
    }
    bool estInterieur(double p, double q)
    {
        if (sqrt((x-p)*(x-p)+(y-q)*(y-q))==r)
        {

            return true;
        }
        else
        {

            return false;
        }
    }
} ;

/* ----- Définition des fonctions membre de la classe cercle ---- */
cercle::cercle()
{
    x=y=r=0;
}
cercle::cercle (double a, double b,double c)
{
    x = a ;
    y = b ;
    r = c ;
}
cercle::~cercle ()
{
    cout << " Destructeur \n" ;
}
double cercle::surface() const
{
    return M_PI*r*r ;
}
void cercle::affiche ()
{
    cout << "Je suis en " << x << " " << y <<"  surface " << surface() <<   "\n" ;
}

main()
{
    bool bb;
    cercle a(3,1,2) ;
    cercle b;
    a.affiche () ;
    b.setCentre(3,3);
    bb=a.estInterieur(1,1);
    if (bb)
    {
        cout << " Ce point appartient au cercle \n" << endl;
    }
    else
    {
        cout <<  " ce point n'appartient pas ! \n" << endl;
    }
    b.setR(2);
    b.affiche();


}
//appel du destructeur par defaut
