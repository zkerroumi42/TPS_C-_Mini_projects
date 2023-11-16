#include <iostream>
#include "automat.h"
using namespace std;
int main() {
    Automat automat(3, 10); // Create an Automat with 3 slots and 10 products per slot

    // Add slots to the automat
    Slot* slot1 = new Slot(1, "Product 1", 5);
    Slot* slot2 = new Slot(2, "Product 2", 10);
    Slot* slot3 = new Slot(3, "Product 3", 7);
    automat.addSlot(slot1);
    automat.addSlot(slot2);
    automat.addSlot(slot3);

    // Perform operations on the automat
    automat.fillAll();
    automat.changeSlot(2, "New Product 2", 15);
    automat.fill(3, 5);
    automat.affiche();

    // Use the automat
    automat.help();

    // Clean up memory
    delete slot1;
    delete slot2;
    delete slot3;




    return 0;
}
