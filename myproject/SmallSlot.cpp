#include "SmallSlot.h"

SmallSlot::SmallSlot()
{
}

SmallSlot::~SmallSlot()
{
 delete motor1;
}
SmallSlot::SmallSlot(int slotId, string productName, int price, int motorId1):Slot(slotId,productName,price),motor1(new Motor(motorId1)) {}
void SmallSlot::drop() {
		motor1->trigger();
		Slot::drop();
	}
    