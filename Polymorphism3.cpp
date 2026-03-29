#include<iostream>
using namespace std;
class Notification { // base class
    public:
    virtual void send(){
        cout<<"Notification System"<<endl;
    }
};
class EmailNotification : public Notification{
    public:
    void send()override{
        cout<<"This is My First Notice"<<endl;
    }
};
class SMSNotification: public Notification{
    public:
    void send() override{
        cout<<"This is My Second Notification"<<endl;
    }
};
class PushNotification: public Notification{
    public:
    void send() override{
        cout<<"This is My Thirds Notification"<<endl;
    }
};
int main(){
    Notification *ptr;

    Notification Base;
    EmailNotification obj1;
    SMSNotification   obj2;
    PushNotification  obj3;

    ptr=&Base;
    ptr->send();

    ptr=&obj1;
    ptr->send();

    ptr=&obj2;
    ptr->send();

    ptr=&obj3;
    ptr->send();
}