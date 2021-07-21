#include <iostream>
#include <string>
#include <vector>


using namespace std;

class Player
{
    //attributes (data)
    string name {"Player"};
    int health {100};
    int xp {3};
    //methods(operation and functions)
    void talk(string);
    bool is_dead();
};

class Account
{
    //Attributes
    string name {"Account"};
    double balance {0.0};
    
    //methods
    bool deposit(double);
    bool withdraw(double);
};



int main() {
    
    Player frank_account;
    Player jim_account;
    
    
    Player frank;
    Player hero;
    
    Player players[] {frank, hero};
    
    vector<Player> player_vec {hero};
    player_vec.push_back(frank);
    
    
    Player *enemy {nullptr};
    enemy = new Player;
    
    delete enemy;
    
    return 0;
}