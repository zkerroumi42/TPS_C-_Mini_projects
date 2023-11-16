#ifndef SMALLSLOT_H
#define SMALLSLOT_H
#include"Slot.h"

class SmallSlot:public Slot
{
public:
    SmallSlot();
    SmallSlot(int , string , int , int );
    ~SmallSlot();
    void drop();

private:
 Motor* motor1;

};

#endif