#include<iostream>

using namespace std;


class liste
{

    int *T;
    int max1;

public:
    liste(int n)
    {
        max1=n;
        T=new int(max1);
    }
    ~liste()
    {
        delete []T;
    }
    void saisie()
    {
        for (int i = 0; i < max1; i++)
        {
            cout << "Entrez la composante " << i+1 << " : ";
            cin >> T[i];
        }
    }
   friend void affiche(liste & l)
    {
        for (int i = 0; i < l.max1; i++)
        {
            cout << l.T[i] << " ";
        }
        cout << endl;
    }
    liste (liste & li)
    {
        max1=li.max1;
        T=new int(max1);
        for(int i=0; i<max1; i++)
        {
            T[i]=li.T[i];
        }

    }
    liste& operator =(liste & l)
    {
        if (this != &l)
        {
            delete[] T;
            max1 = l.max1;
            T = new int[max1];
            for (int i = 0; i < max1; i++)
            {
                T[i] = l.T[i];
            }
        }
        return *this;
    }
};

main()
{
    liste a(3);
    liste b(6);
    a.saisie();
    b=a;
    affiche(b);


}
