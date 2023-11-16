#include <iostream>
#include <vector>

class Motor
{
private:
    int id;

public:
    Motor(int motorId) : id(motorId) {}

    void Trigger()
    {
        std::cout << "Motor " << id << " activated" << std::endl;
    }
};

class Slot
{
private:
    std::string productName;
    int id;
    int numProducts;
    int price;
    Motor* motor1;
    Motor* motor2;

public:
    Slot(int slotId, const std::string& name, int productPrice, int motorId1, int motorId2 = 0)
        : id(slotId), productName(name), numProducts(0), price(productPrice), motor1(new Motor(motorId1)), motor2(motorId2 != 0 ? new Motor(motorId2) : nullptr) {}

    ~Slot()
    {
        delete motor1;
        delete motor2;
    }

    void drop()
    {
        motor1->Trigger();
        if (motor2 != nullptr)
            motor2->Trigger();

        std::cout << productName << " delivered from slot " << id << std::endl;
    }

    const std::string& getProductName() const
    {
        return productName;
    }
    void setProductName(const std::string& name)
    {
        productName = name;
    }

    int getId() const
    {
        return id;
    }

    int getNumProducts() const
    {
        return numProducts;
    }
    void setNumProducts(int num)
    {
        numProducts = num;
    }

    int getPrice() const
    {
        return price;
    }
    void setPrice(int productPrice)
    {
        price = productPrice;
    }
};

class Automat
{
private:
    std::vector<Slot*> slots;
    int numSlots;
    int numProductsPerSlot;
    int cached;

public:
    Automat(int numSlots, int numProductsPerSlot)
        : numSlots(numSlots), numProductsPerSlot(numProductsPerSlot), cached(-1)
    {
        slots.reserve(numSlots);
    }

    ~Automat()
    {
        for (int i = 0; i < slots.size(); i++)
        {
            delete slots[i];
        }
    }

    void addSlot()
    {
        Slot* newSlot = new Slot(slots.size() + 1, "", 0, 0);
        slots.push_back(newSlot);
    }

    int searchSlot(int slotId)
    {
        if (cached != -1 && slots[cached]->getId() == slotId)
            return cached;

        for (int i = 0; i < slots.size(); i++)
        {
            if (slots[i]->getId() == slotId)
            {
                cached = i;
                return i;
            }
        }

        return -1;
    }

    void changeSlot(int slotId, const std::string& productName, int price)
    {
        int slotIndex = searchSlot(slotId);
        if (slotIndex != -1)
        {
            slots[slotIndex]->setProductName(productName);
            slots[slotIndex]->setPrice(price);
        }
    }

    int getPieces(int slotId)
    {
        int slotIndex = searchSlot(slotId);
        if (slotIndex != -1)
        {
            return slots[slotIndex]->getNumProducts();
        }
        return 0;
    }

    bool isAvailable(int slotId)
{
    int slotIndex = searchSlot(slotId);
    if (slotIndex != -1)
    {
        return slots[slotIndex]->getNumProducts() > 0;
    }
    return false;
}
   

    int getPrice(int slotId)
    {
        int slotIndex = searchSlot(slotId);
        if (slotIndex != -1)
        {
            return slots[slotIndex]->getPrice();
        }
        return 0;
    }

    void dropSlot(int slotId)
    {
        int slotIndex = searchSlot(slotId);
        if (slotIndex != -1)
        {
            slots[slotIndex]->drop();
            slots[slotIndex]->setNumProducts(slots[slotIndex]->getNumProducts() - 1);
        }
    }

    void fillAll()
    {
        for (int i = 0; i < slots.size(); i++)
        {
            slots[i]->setNumProducts(numProductsPerSlot);
        }
    }

    void fill(int slotId, int numProducts)
    {
        int slotIndex = searchSlot(slotId);
        if (slotIndex != -1)
        {
            slots[slotIndex]->setNumProducts(numProducts);
        }
    }
};

int main()
{
    Automat vendingMachine(15, 10);

    vendingMachine.addSlot();
    vendingMachine.changeSlot(1, "Twix", 200);
    vendingMachine.fillAll();

    std::cout << "Welcome to the Snack Vending Machine!" << std::endl;
    std::cout << "Please insert coins and select a product." << std::endl;

    int coin;
    int product;

    while (true)
    {
        std::cout << "Insert coins (0 to finish): ";
        std::cin >> coin;

        if (coin == 0)
        {
            break;
        }

        std::cout << "Select a product (slot number): ";
        std::cin >> product;

        if (vendingMachine.isAvailable(product))
        {
            int price = vendingMachine.getPrice(product);
            if (coin >= price)
            {
                vendingMachine.dropSlot(product);
                std::cout << "Enjoy your snack!" << std::endl;
                std::cout << "Change: " << coin - price << " cents" << std::endl;
            }
            else
            {
                std::cout << "Not enough coins. Please insert more coins." << std::endl;
            }
        }
        else
        {
            std::cout << "Product not available. Please select another product." << std::endl;
        }
    }

    return 0;
}
