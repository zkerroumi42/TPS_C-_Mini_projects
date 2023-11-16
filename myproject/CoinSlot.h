#ifndef COINSLOT_H
#define COINSLOT_H



class CoinSlot
{
public:
    CoinSlot();
    ~CoinSlot();
	int updateCoinAmount();
	int getCoinAmount();
	void clear() ;
	void returnCoins(int);
private:
	int insertedAmount;
	int coinValues[7] = { 200,100,50,20,10,5,1 };
};

#endif