//Section 15 
//Redefining and Using Basee Class Methids
#include <iostream>
#include "Savings_Account.h"


using namespace std;

int main() {
    cout << "\n========Account class ==========================="<<endl;
    Account a1{1000.0};
    cout << a1 << endl;         //Account balance: 1000.0
    
    a1.deposit(500.0);
    cout << a1 << endl;         //Account balance: 1500.0
    
    a1.withdraw(1000.0);
    cout << a1 << endl;         //Account balance: 500.0
    
    a1.withdraw(5000.0);        //Insufficient funds
    cout << a1<< endl;          //Account balance: 500.00
    
    cout << "\n=========Savings Account class========================"<<endl;
    
    Savings_Account s1{1000.0,5.0};
    cout << s1<<endl;           //Savings Account balance: 1000, interest rate: 5
    
    s1.deposit(1000.0);
    cout << a1 << endl;         //Savings Account balance: 2050.0, interest rate: 5
    
    s1.withdraw(2000.0);
    cout << a1 << endl;         //Savings Account balance: 50.0, Iterest rate: 5
    
    s1.withdraw(1000.0);        //Insufficient funds
    cout << s1<< endl;          //Savings Account balance: 50.0, Iterest rate: 5
    
    return 0;
}