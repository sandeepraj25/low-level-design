#include <iostream>
using namespace std;
class Animal{ // base class or parent class
public:
    void eat()
    {
        cout << "Animal is eating" << endl;
    }
};
class Dog: public Animal {
    public:
    void bark(){
        cout<<"Dog is Barking"<< endl;
    }
};
class Cat: public Animal{
    public:
    void meo(){
        cout<<"cat is meowing"<<endl;
    }
};
int main(){
 Dog d;

 d.eat(); // inherit function (parent)
 d.bark(); // own function (child)

 Cat c;

 c.eat(); // inherit function (parent)
 c.meo(); // own function (child)

}