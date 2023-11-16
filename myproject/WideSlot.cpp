#include "WideSlot.h"

WideSlot::WideSlot()
{

}

WideSlot::~WideSlot()
{
delete motor1;
delete motor2;
}
WideSlot::WideSlot(int slotId, string productName, int price, int motorId1, int motorId2):Slot(slotId, productName, price),
motor1(new Motor(motorId1)),motor2(new Motor(motorId2)){}

void WideSlot::drop() {
		motor1->trigger();
		motor2->trigger();
		Slot::drop();
	}