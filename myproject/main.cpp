#include <iostream>
#include "automat.h"
using namespace std;
int main() {
    Automat automat(3, 10); // Create an Automat with 3 slots and 10 products per slot

    // Add slots to the automat
    Slot* smallslot1 = new SmallSlot(1, "PIPCI",10,2);
    Slot* smallslot2 = new SmallSlot(2, "COCA COLA", 13,2);
    Slot* smallslot3 = new SmallSlot(3, "RAIBI JAMILA",4, 3);

    Slot* wideslot1 = new WideSlot(3, "HAWAI",11,3,4);
    Slot* wideslot2 = new WideSlot(2, "MERINDINA", 2, 3, 5);
    Slot* wideslot3 = new WideSlot(1, "DANAP", 3, 1, 0);

    automat.addSlot(smallslot1);
    automat.addSlot(smallslot2);
    automat.addSlot(smallslot3);
    automat.addSlot(wideslot1);
    automat.addSlot(wideslot2);
    automat.addSlot(wideslot3);


    // operations of automat
    automat.fillAll();
    automat.changeSlot(2, "Fanta", 15);
    automat.fill(3, 5);
    automat.affiche();

    // Use the automat
    automat.help();

    // Clean up memory
    delete smallslot1;
    delete smallslot2;
    delete smallslot3;
    delete wideslot1;
    delete wideslot2;
    delete wideslot3;




    return 0;
}
