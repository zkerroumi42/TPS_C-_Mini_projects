#ifndef LIBRAIRIE_H
#define LIBRAIRIE_H
#include<vector>
#include "livre.h"
using namespace std;
class librairie
{
    public:
        librairie();
        virtual ~librairie();
        void ajouter_livre(livre*);
        virtual void affiche();
        void vider_stock();


    private:
        vector<livre*>livers;
        vector<livre*>::iterator it;
};

#endif // LIBRAIRIE_H
