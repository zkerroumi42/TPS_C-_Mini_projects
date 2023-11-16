#include <iostream>
#include <cmath>

using namespace std;

class Point
{
private:
    int x, y;

public:
    Point(int x = 0, int y = 0):x(x),y(y){}

    int getX() const
    {
        return x;
    }

    int getY() const
    {
        return y;
    }

    void setX(int x)
    {
        this->x = x;
    }

    void setY(int y)
    {
        this->y = y;
    }
};

class Segment
{
private:
    Point p1, p2;

public:
    Segment(Point p1, Point p2):p1(p1),p2(p2)
    {
    }

    double longueur() const
    {
        int dx = p2.getX() - p1.getX();
        int dy = p2.getY() - p1.getY();
        return sqrt(dx * dx + dy * dy);
    }

    bool appartient(Point p) const
    {

        // ou la relation  AM + MB =AB
        int minx = min(p1.getX(), p2.getX());
        int maxx = max(p1.getX(), p2.getX());
        int miny = min(p1.getY(), p2.getY());
        int maxy = max(p1.getY(), p2.getY());
        return (p.getX() >= minx && p.getX() <= maxx && p.getY() >= miny && p.getY() <= maxy);
    }

    void affiche() const
    {
        cout << "segment [ A(" << p1.getX() << "," << p1.getY() << ") ; B(" << p2.getX() << "," << p2.getY() << ") ]" << endl;
    }
};

int main()
{
    Point p1(4, 14);
    Point p2(12, -35);
    Segment s(p1, p2);


    cout << "La longueur du segment est : " << s.longueur() << endl;

    Point p3(8, 5);
    bool test=s.appartient(p3);
    if (test)
    {
        cout << "Le point P(" << p3.getX() << "," << p3.getY() << ") appartient au segment." << endl;
    }
    else
    {
        cout << "Le point P(" << p3.getX() << "," << p3.getY() << ") n'appartient pas au segment." << endl;
    }

    s.affiche();

    return 0;
}
