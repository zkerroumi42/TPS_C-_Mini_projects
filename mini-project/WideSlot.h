#ifndef WIDESLOT_H
#define WIDESLOT_H
#include"Slot.h"


class WideSlot:public Slot
{
public:
    WideSlot();
    WideSlot(int , string , int , int , int );
    ~WideSlot();
    void drop();

private:
    Motor* motor1;
	Motor* motor2;

};

#endif