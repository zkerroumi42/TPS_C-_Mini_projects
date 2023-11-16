#include <iostream>

using namespace std;

// patron de carre d'un nombre qq
template <class T> T carre(T a)
{
    return a*a;
}
// patrons somme des elements de tableau qq
template <class H> H sommeTableau(H tab[],int taille)
{
    H somme=0;
    for(int i=0; i<taille; i++)
    {
        somme+=tab[i];
    }
    return somme;
}
// tester  les appels corrects

template<class U,class T>void fct (T a, U b) { cout<<"appel :fonction I template void fct (T a, U b)"<<endl; } // patron I
template<class U,class T> void fct (T * a, U b) { cout<<"appe :lfonction II template void fct (T * a, U b)"<<endl; } // patron II
template<class U,class T> void fct (T, T, T) { cout<<"appel :fonction III template void fct (T, T, T) "<<endl; } // patron III
void fct (int a, float b) {
cout<<"appel :fonction IV void fct (int a, float b)"<<endl;
} // fonction IV


template <class T,class U> class Rectangle
{
private :
    T x,y;
    U longueur,largeur;
public :
    Rectangle(T a,T b,U c,U d):x(a),y(b),longueur(c),largeur(d) {}
    ~Rectangle() {}
    U aire()
    {
        return longueur*largeur;
    }
};


 main()
{

    // exemples Exercices 1
    int a=2;
    float b=3.3;

     // exercices 2
    float tab1[]= {1.1,1.2,1.3,1.4,1.5};
    int tailletab1=sizeof(tab1)/4;
    int tab2[]= {1,2,3,4,5};
    int tailletab2=sizeof(tab2)/4;

    //exercices 3
    Rectangle<int ,int > rectangle1(1,2,4,4);
    // Exercices 4
    int n, p, q ; float x, y ; double z ;

         cout<<"patron Exercices 1 *********************"<<endl;
         cout<<"   "<<endl;
    cout<<"le carre de "<<a<<"est :"<<carre(a)<<endl;
    cout<<"le carre de "<<b<<"est :"<<carre(b)<<endl;
    cout<<"   "<<endl;
        cout<<"patron Exercice 2 *****************"<<endl;
        cout<<"   "<<endl;
    cout<<"la somme des éléments de tableau reel :"<<sommeTableau(tab1,tailletab1)<<endl;
    cout<<"la somme des éléments de tableau entier :"<<sommeTableau(tab2,tailletab2)<<endl;
    cout<<"   "<<endl;
        cout<<"patron Exercice 3*****************"<<endl;
    cout<<"le aire du rectangle est :"<<rectangle1.aire()<<endl;
     cout<<"   "<<endl;
    cout <<"Exercice 4 ***************"<<endl;
    cout<<"   "<<endl;
fct (n, p) ; // appel I
fct (x, y ) ; // appel II
fct (n, x) ; // appel III
fct (n, z) ; // appel IV
fct (&n, p) ; // appel V
fct (&n, x) ; // appel VI
cout <<"fct (&n, &p, &q); sa marche pas" <<endl; // appel VII fct (&n, &p, &q)
}
