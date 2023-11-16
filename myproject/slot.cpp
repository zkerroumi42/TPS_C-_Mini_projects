#include "slot.h"
#include<string>
using namespace std;
#include<iostream>
Slot::Slot()
{
    //ctor
}

Slot::~Slot()
{
}

Slot::Slot(int a,const string& b,int c):id(a),productName(b),price(c)
{
}

void Slot::drop()
{
    if (numProducts>0) {
			cout << productName << " livre depuis le logement " << id << "." << endl;
		}else
			cout << "ne pas suffisant" << endl;
}
