#include "CoinSlot.h"
using namespace std;
#include<iostream>
CoinSlot::CoinSlot()
{
	insertedAmount = 0;
}

CoinSlot::~CoinSlot()
{

}

int CoinSlot::updateCoinAmount() {
		int c;
		cout << "insert coins(-1 to exit the programme) : ";
		cin >> c;
		if (c == -1)
			return 0;
		else {
			insertedAmount += c;
			return c;
		}
	}
int CoinSlot::getCoinAmount() {
		return insertedAmount;
	}
void CoinSlot::clear() {
		insertedAmount = 0;
	}
void CoinSlot::returnCoins(int price) {
		if (insertedAmount >= price) {
			int c = insertedAmount - price;
			cout << "le reste est : " ;
				for (int i = 0; i < 7; i++) {
					if ((c / coinValues[i]) != 0) {
						cout << c / coinValues[i] << " du " << coinValues[i] << " ";
						c -= ((c / coinValues[i]) * coinValues[i]);
					}
				}
				cout << endl;
		}
	}
