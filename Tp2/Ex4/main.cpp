#include <iostream>

using namespace std;



class complexe
{
    float reel;
    float img;

public:
    complexe(float a=0.0,float b=0.0)
    {
        reel=a;
        img=b;
    }
    ~complexe()
    {
        cout<<"destructeur"<<endl;
    }
    void affiche()
    {
        cout<<"le nombre complexe est :"<<reel<<"+"<<img<<"i"<<endl;
    }
    friend ostream & operator<<(ostream & os,complexe& c)
    {
        os<<c.reel<<"+"<<c.img<<"i";
        return os;
    }



    friend bool operator ==(complexe&c,complexe&d)
    {
        return (&c==&d)==0;
    }
    friend complexe&operator +(complexe&z1, complexe&z2)
    {
        complexe z;
        z.reel=z1.reel+z2.reel;
        z.img=z1.img+z2.img;
        return z;
    }
    friend complexe&operator+(complexe&y, float a)
    {
        complexe z;
        z.reel=y.reel+a;
        z.img=y.img;
        return z;

    }
    friend complexe&operator+(float a,complexe&y)
    {
        complexe z;
        z.reel=a+y.reel;
        z.img=y.img;
        return z;
    }
    complexe&operator+=(const complexe&y)
    {
        reel+=y.reel;
        img+=y.img;
        return *this;
    }
    complexe& operator-=(const complexe&y)
    {
        reel-=y.reel;
        img-=y.img;
        return *this;
    }
     friend complexe& operator*(const complexe&y,complexe&x)
    {
        complexe z;
        z.reel=(x.reel*y.reel-x.img*y.img);
        z.img =(x.reel*y.img+y.reel*x.img);
        return z;
    }
    friend complexe& operator*(float a,const complexe&x)
    {
        complexe z;
        z.reel=a*x.reel;
        z.img =a*x.img;
        return z;
    }
    friend complexe& operator*(const complexe&x,float a)
    {
        complexe z;
        z.reel=a*x.reel;
        z.img =a*x.img;
        return z;
    }
    friend complexe& operator/(const complexe&z1,const complexe&z2)
    {
        complexe z;
        float domenirateur=z2.reel*z2.reel + z2.img*z2.img;
        z.reel=(z1.reel*z2.reel+z1.img*z2.img)/domenirateur;
        z.img=(z1.img*z2.reel - z1.reel*z2.img)/domenirateur;
        return z;
    }




};

main()
{
    complexe defaut,zero(0.0, 0.0), un(1.0, 0.0), i(0.0, 1.0), j;
    complexe z(2,2);
    j = un + i;
    j.affiche();
    complexe h=j+3;
    h.affiche();
    cout <<zero<< " ==? " <<defaut<<endl;
    if (zero == defaut) cout << " oui" <<endl;
    else cout << " non" <<endl;
    complexe trois(un);
    trois.affiche();
    trois += un;
    trois += 1.0;
    cout << un << " + " << un << " + 1.0 = " << trois <<endl;
    complexe deux(trois);
    deux -= un;
    cout << trois << " - " << un << " = " << deux <<endl;
    trois = 1.0 + deux;
    cout << "1.0 + " << deux << " = " << trois <<endl;
complexe mul=deux*trois;
complexe div =z/i;
;cout<<deux<< " * " <<trois<< " = " << mul <<endl;
cout<< z << " / " <<i<< " = " << div <<endl;

}
