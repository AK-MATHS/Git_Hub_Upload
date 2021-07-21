#include <iostream>
#include <string>
#include <vector>

using namespace std;



class Player{
public:
    //attributes (data)
    string name;
    int health;
    int xp;
    //methods(operation and functions)
    void talk(string text_to_say) { cout << name << " says " << text_to_say << endl; }
    bool is_dead();
};

class Account {
public:
    //Attributes
    string name;
    double balance;
    
    //methods
    bool deposit(double bal) {balance += bal; cout << "In deposit" << endl; }
    bool withdraw(double bal) {balance -= bal; cout << "In withdraw" << endl; }
};



int main() {
    
    Player frank;
    frank.name = "Frank";
    frank.health = 100;
    frank.xp = 12;
    
    frank.talk("Hi there");
    
    
    
//    Player hero;
    
//    Player players[] {frank, hero};
//    
//    vector<Player> player_vec {hero};
//    player_vec.push_back(frank);
//    
//    
    Player *enemy {nullptr};
    enemy = new Player;
    (*enemy).name = "Enemy";
    (*enemy).health = 100;
    enemy->xp = 15;
    
    enemy->talk("I will destroy you!");
    
    delete enemy;
    
    Account frank_account;
    frank_account.name = "Frank's account";
    frank_account.balance = 5000.0;
    
    frank_account.deposit(1000.0);
    frank_account.withdraw(500.0);
    
    Account *mary_account = new Account;
    mary_account->name = "Mary's Acount";
    mary_account->balance = 10000.0;
    
    mary_account->deposit(3000.0);
    mary_account->withdraw(5000.0);
    
    return 0;
}