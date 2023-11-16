#ifndef AUTOMAT_H
#define AUTOMAT_H
#include<vector>
#include<string>
#include"Slot.h"
#include"CoinSlot.h"
#include"DropCheck.h"
#include"Keypad.h"

class Automat
{
    public:
        Automat();
         ~Automat();
        Automat(int ,int );
        int searchSlot(int);
        // bool addSlot(int,const string&,int);
        bool addSlot(Slot*);
        void changeSlot(int,const string&,int);
        int getPrice(int);
        int getNumPieces(int);
        bool isAvaiable(int );
        bool dropSlot(int );
        void fillAll();
        void fill(int ,int);
        void help();
        void affiche();


        /*int GetnumSlots() { return numSlots; }
        void SetnumSlots(int val) { numSlots = val; }
        Slot Getcached() { return cached; }
        void Setcached(Slot val) { cached = val; }
        int GetnumProductsPerSlot() { return numProductsPerSlot; }
        void SetnumProductsPerSlot(int val) { numProductsPerSlot = val; }
        */
    protected:

    private:
        vector<Slot *> slots;
        vector<Slot *>::iterator it;

        int numSlots;
        int cached;
        int numProductsPerSlot;
        CoinSlot coinSlot;
	    Keypad keyPad;
	    DropCheck dropCheck;
};

#endif // AUTOMAT_H
