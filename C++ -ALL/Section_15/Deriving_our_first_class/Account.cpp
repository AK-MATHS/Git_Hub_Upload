#include "Account.h"

Account::Account()
    : balance{0.0}, name{"An Account"}
{
}

Account::~Account()
{
}

void Account::deposit(double amount) {
    std::cout << "Account deposit called with " << amount << std::endl;
}

void Account::withdraw(double amount) {
    std::cout << "Account withdrawal called with " << amount << std::endl;
}