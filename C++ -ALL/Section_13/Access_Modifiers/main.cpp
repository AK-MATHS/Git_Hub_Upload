#include <iostream>
#include <string>

class Player
{
private:
    // attributes
    std::string name{"Player"};
    int health;
    int xp;
    
public:
    // methods
    void talk(std::string text_to_say) { std::cout << name << " says " << text_to_say << std::endl; }
    bool is_dead();
};

//class Account
//{
//private:
//    std::string name;
//    double balance;
//    
//public:
//    bool withdraw(double amount);
//    bool deposit(double amount);
//};


int main() {
    
    Player frank;
//    frank.name = "Frank";
//    std::cout << frank.health << std::endl;
    frank.talk("Hello there!");
    
//    Account frank_account;
//    frank_account.balance = 10000.00 //Compiler error
//    frank_account.deposit(10000.0); //OK
//    frank_account.name = "Frank's Account"; // Compiler error
//    
//    Account *mary_account = new Account();
//    
//    mary_account->balance = 10000.0 // Compiler error
//    mary_account->withdraw(10000.0); // OK
//    
//    delete mary_account;
    
    
    std::cout << std::endl;
    return 0;
}