#include "Keypad.h"
using namespace std;
#include<iostream>
Keypad::Keypad()
{

}

Keypad::~Keypad()
{

}
int Keypad::getSelection() {
		int c;
		cout << "choisir l'emplacement du produit (ou -1 pour annuler le processus) : ";
		cin >> c;
		if (c == -1)
			return -1;
		else {
			return c;
		}
	} 