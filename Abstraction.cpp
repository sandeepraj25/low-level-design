#include<iostream>
using namespace std;
class Payment {
    public:
    virtual void pay()=0;
};
class UPIPayment : public Payment{
    public:
    void pay() override{
      cout<<"Payment Done via a UPI"<<endl;
    }
};
class CreditCard : public Payment{
    public:
    void pay() override{
        cout<<"Payment Done Via a CreditCard"<<endl;
    }
};
class Netbanking: public Payment{
    public:
    void pay() override{
        cout<<"Payment Done via a Netbanking"<<endl;
    }
};

int main(){
  Payment *ptr; // Base Pointer Bano

  UPIPayment upi;  // Sabhi Derived class ka object assign karo
  CreditCard credit; // Sabhi Derived class ka object assign karo
  Netbanking net;   // Sabhi Derived class ka object assign karo

  ptr= &upi;
  ptr->pay();
  ptr= &credit;
  ptr->pay();
  ptr= &net;
  ptr->pay();

return 0;
}