#include<iostream>
using namespace std;
//Base Class // Parent Class 
// Payment System 
class Payment{
    public:
   virtual void pay(){
        cout<<"Payment is starting"<<endl;
    }
};
class UpiPayment: public Payment{
public:
void pay() override{
    cout<<"Plaese Pay Using UPI Payment / Scanner"<<endl;
}
};
class CreditCard: public Payment{
    public:
    void pay() override{
        cout<<"please Pay Using Credit Card"<<endl;
    }
};
class NetBanking: public Payment{
    public: 
    void pay() override{
        cout<<"Please Pay using Net Banking"<<endl;
    }
};



int main(){
Payment *gateway;

Payment Base;
CreditCard Credit;
UpiPayment Upi;
NetBanking Net;

gateway =&Base;
gateway->pay();

gateway =&Credit;
gateway ->pay();

gateway = &Upi;
gateway->pay();

gateway = &Net;
gateway->pay();
}