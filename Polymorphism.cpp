#include <iostream>
using namespace std;
// Base Class or // Parent Class

// Food Delivery System;
class DeliveryBoy{
public:
    virtual void delivery()
    {
        cout << "Delivering Order" << endl;
    }
};

// Child or Derived Class
class BikeDelivery : public DeliveryBoy{
public:
    void delivery() override{
        cout << "Apka Food Bike se lekar aa raha hun" << endl;
    }
};

// Child or Derived Class 
class CycleDelivery :public DeliveryBoy{
    public:
    void delivery() override{
        cout<<"Bhai Cycle se lekar aa raha Hun"<<endl;
    }
};
int main()
{
    DeliveryBoy *Sandeep;

    BikeDelivery Bike;
    CycleDelivery Cycle;
    DeliveryBoy Base;

    Sandeep = &Base;
    Sandeep-> delivery();

    Sandeep= &Bike;
    Sandeep->delivery();

    Sandeep = &Cycle;
    Sandeep->delivery();
}