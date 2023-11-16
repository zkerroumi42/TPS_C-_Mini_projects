#include <iostream>
using namespace std;

class Point
{
private:
    double x;
    double y;
    static int nombre; // variable de classe pour compter le nombre d'objets cr��s

public:
    Point(double x = 0, double y = 0) : x(x), y(y)
    {
        nombre++; // incr�mente le compteur d'objets � chaque cr�ation d'un nouveau Point
    }

    double getX() const
    {
        return x;
    }

    double getY() const
    {
        return y;
    }

    void affiche() const
    {
        cout << "Point (" << x << ", " << y << "), nombre d'objets : " << nombre << endl;
    }

    static int getNombre()   // m�thode de classe pour obtenir le nombre d'objets cr��s
    {
        return nombre;
    }
};

// initialisation de la variable de classe nombre
int Point::nombre = 0;


main()
{
    Point p1(1, 2);
    Point p2(3, 4);
    Point p3(5, 6);


    p1.affiche();
    p2.affiche();
    p3.affiche();


    cout << "Nombre total d'objets : " << Point::getNombre() << endl;

}
