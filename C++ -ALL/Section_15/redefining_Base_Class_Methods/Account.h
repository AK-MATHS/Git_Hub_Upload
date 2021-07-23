#ifndef _ACCOUNT_H_
#define _ACCOUNT_H_

#include <iostream>
using namespace std;

class Account {
    friend std::ostream &operator<< (std::ostream&os, const Account &account);
protected:
    double balance;
public:
    Account();
    Account(double);
    ~Account();
    
    void deposit(double amount);
    void withdraw(double amount);

};

#endif // _ACCOUNT_H_