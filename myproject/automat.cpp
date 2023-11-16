#include "automat.h"
#include<string>
#include<iostream>
using namespace std;

Automat::Automat()
{
    //ctor
}

Automat::~Automat()
{
   for (int i = 0; i < slots.size(); i++)
        {
            delete slots[i];
        }
        slots.clear();
}


Automat::Automat(int numSlots,int numProductsPerSlot):numSlots(numSlots),numProductsPerSlot(numProductsPerSlot),cached(-1)
{
    slots.reserve(numSlots);
}
int Automat::searchSlot(int slotId)
{
    //verifier est ce que cached deja mise en cache au non

    if(cached!=-1 && slots[cached]->Getid()==slotId){
        return cached;
    }
    for(int i=0 ;i<slots.size();i++){
        if(slots[i]->Getid()==slotId){
            cached=i;
            return i;
        }
    }
    return -1;

}
// //bool Automat::addSlot(int slotId,const string&productName,int price,int motorId1,int motorId2)
// {
//     slots.push_back(new Slot(slotId,productName,price));
//     return true;
// }
bool Automat::addSlot(Slot* s) {
		slots.push_back(s);
		return true;
	}
void Automat::changeSlot(int slotId,const string&name,int price)
{
    int index=searchSlot(slotId);
    if(index==-1){
        cout<<"Erreur de changement ! veullier try again "<<endl;
    }else
    slots[index]->SetproductName(name);
    slots[index]->Setprice(price);
   // cout<<"changement ce fait avec success !"<<endl;
}
int Automat::getPrice(int slotId)
{
    int index=searchSlot(slotId);
    if(index!=-1){
        return slots[index]->Getprice();
    }
    return 0;
}
int Automat::getNumPieces(int slotId)
{
     int index=searchSlot(slotId);
     if(index!=-1){
        return slots[index]->GetnumProducts();
     }else
     return 0;
}
bool Automat::isAvaiable(int slotId)
{
    int index=searchSlot(slotId);
     if(index!=-1){
        return slots[index]->GetnumProducts()>0;
     }else
     return 0;

}
bool Automat::dropSlot(int slotId)
{
    int index=searchSlot(slotId);
     if(index!=-1){
        if (dropCheck.productReleased() != 0 && slots[index]->GetnumProducts() > 0){
            slots[index]->drop();
            slots[index]->SetnumProducts(slots[index]->GetnumProducts()-1);
             delete  slots[index];
            return 1;
        }else {
			cout << "le produit n'est pas livre correctement" << endl;
			return 0;
             }


     }else
     return -1;
}


void Automat::fillAll()
{
    for(int i=0;i<slots.size();i++){
        slots[i]->SetnumProducts(numProductsPerSlot);
    }
}
void Automat::fill(int slotId,int numProducts)
{
    int index=searchSlot(slotId);
    if(index!=-1){
        slots[index]->SetnumProducts(numProducts);
    }

}
void Automat::help() {
		int c = keyPad.getSelection();
		while (c != -1) {
			if (isAvaiable(c) && getNumPieces(c) > 0) {
				while (coinSlot.getCoinAmount() < getPrice(c)) {
					if (coinSlot.updateCoinAmount()) {

					}
					else {
						coinSlot.returnCoins(getPrice(c));
						c = keyPad.getSelection();
					}
				}
				if (dropSlot(c)) {
					coinSlot.returnCoins(getPrice(c));
					coinSlot.clear();
					c = keyPad.getSelection();

				}
				else {
					coinSlot.returnCoins(0);
					coinSlot.clear();
					c = keyPad.getSelection();
				}


			}
			else {
				cout << "n'existe pas" << endl;
				coinSlot.clear();
				c = keyPad.getSelection();
			}

		}
	}
void Automat::affiche() {
    for (int i = 0; i < slots.size(); i++) {
       cout<<"l'element"<<i+1<<":"<<endl;
       cout << "Emplacement " << slots[i]->Getid() << ":" <<endl;
       cout << "Nom du produit: " << slots[i]->GetproductName() <<endl;
       cout << "Prix: " << slots[i]->Getprice() << " DH" <<endl;
       cout << "Nombre de produits: " << slots[i]->GetnumProducts() <<endl;
       cout <<endl;
    }
}

