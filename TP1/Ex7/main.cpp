#include <iostream>
#include <cmath>

using namespace std;

class Point
{
public:
    Point(int x, int y) : x(x), y(y) {}
    int x, y;
} ;

class Rectangle
{
public:
    // constructeurs
    Rectangle();
    Rectangle(int x, int y);
    Rectangle(double longeur, double largeur);
    Rectangle(int x, int y, double longeur, double largeur);

    // méthodes
    double perimetre();
    double surface();
    double diagonale();
    void doublerDim();
    void deplacer(int a, int b);

private:
    Point p;
    double longeur;
    double largeur;
};

Rectangle::Rectangle() : p(0, 0), longeur(1), largeur(1) {}

Rectangle::Rectangle(int x, int y) : p(x, y), longeur(1), largeur(1) {}

Rectangle::Rectangle(double longeur, double largeur) : p(0, 0), longeur(longeur), largeur(largeur) {}

Rectangle::Rectangle(int x, int y, double longeur, double largeur) : p(x, y), longeur(longeur), largeur(largeur) {}

double Rectangle::perimetre()
{
    return 2 * (longeur + largeur);
}

double Rectangle::surface()
{
    return longeur * largeur;
}

double Rectangle::diagonale()
{
    return sqrt(longeur * longeur + largeur * largeur);
}

void Rectangle::doublerDim()
{
    longeur *= 2;
    largeur *= 2;
}

void Rectangle::deplacer(int a, int b)
{
    p.x += a;
    p.y += b;
}

int main()
{
    // créer 3 objets Rectangle et tester leurs méthodes
    Rectangle r1; // par défaut
    Rectangle r2(2, 3); // seulement la position p
    Rectangle r3(2.5, 3.5); // seulement les dimensions
    Rectangle r4(1, 1, 3, 4); // les 3 attributs

    // tester les méthodes
    cout << "r1: perimetre=" << r1.perimetre() << ", surface=" << r1.surface() << ", diagonale=" << r1.diagonale() << endl;
    r1.doublerDim();
    r1.deplacer(1, 1);
    cout << "r1 apres doublerDim et deplacer: perimetre=" << r1.perimetre() << ", surface=" << r1.surface() << ", diagonale=" << r1.diagonale() << endl;

    cout << "r2: perimetre=" << r2.perimetre() << ", surface=" << r2.surface() << ", diagonale=" << r2.diagonale() << endl;
    r2.doublerDim();
    r2.deplacer(1, 1);
    cout << "r2 apres doublerDim et deplacer: perimetre=" << r2.perimetre() << ", surface=" << r2.surface() << ", diagonale=" << r2.diagonale() << endl;

    cout << "r3: perimetre=" << r3.perimetre() << ", surface=" << r3.surface() << ", diagonale=" << r3.diagonale() << endl;
    r3.doublerDim();
    r3.deplacer(1, 1);
}
