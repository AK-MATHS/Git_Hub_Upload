#ifndef _ACCOUNT_H_
#define _ACCOUNT_H_

#include <iostream>
#include <string>

using namespace std;

class Account{

public:
    double balance;
    std::string name;
    
    void deposit(double amount);
    void withdraw(double amount);
    Account();
    ~Account();

};

#endif // _ACCOUNT_H_