#ifndef SLOT_H
#define SLOT_H
#include<string>
using namespace std;
#include"motor.h"

class Slot
{
    public:
        Slot();
        virtual ~Slot();
        Slot(int ,const string&,int);
        virtual void drop();


        string GetproductName() { return productName; }
        void SetproductName(string val) { productName = val; }
        int Getid() { return id; }
        void Setid(int val) { id = val; }
        int GetnumProducts() { return numProducts; }
        void SetnumProducts(int val) { numProducts = val; }
        int Getprice() { return price; }
        void Setprice(int val) { price = val; }

    protected:

    private:
        string productName;
        int id;
        int numProducts;
        int price;
        
};

#endif // SLOT_H
