#ifndef DESTRIBUTEUR_H
#define DESTRIBUTEUR_H
using namespace std;
#include<iostream>

class destributeur
{
    public:
        destributeur():someArgent(0){}
        virtual ~destributeur();
        void ajoutePiece(float x){
            someArgent+=x;
        }
        void delivreBoisson(){
            if(someArgent<5) cout<<"Pas assez"<<endl;
            else{
                someArgent=someArgent-5;
                cout<<"voila"<<endl;
                if(someArgent!=0) cout<<"rendu :"<<someArgent<<endl;
            }


        }

    protected:

    private:
        int someArgent;
};

#endif // DESTRIBUTEUR_H
