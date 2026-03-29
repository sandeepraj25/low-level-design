#include <iostream>
using namespace std;
class BankAccount{
private:
    double balance; // data hidden

public:
    BankAccount(double initialBalance){  // constuctor called
        balance = initialBalance;
    }
    void deposit(double amount){ // Deposit amount
        if (amount > 0){
            balance += amount;
            cout<<"Deposit: "<< amount<<endl;
        }
    };

 void withdraw(double amount){ // withdraw amount
    if(amount<=balance){
        balance-=amount;
        cout<<"Withdraw: "<< amount<<endl;
    }
    else{
        cout<<"Insufficient Balance"<<endl;
    }
 }
   double getBalance(){ // getter function - 
    cout << "Fetching balance... ";
    return balance; //Getter function ek public method hota hai jo private 
                    //variable ki value safely return karta hai bina usko direct access dene ke
   }
 };
int main(){
    BankAccount acc(1000);

    acc.deposit(1500);
    acc.withdraw(200);

    cout<<"Available Balance: "<<acc.getBalance()<<endl;
    return 0;
}