#include <iostream>
#include <string>

using namespace std;
class Player{
  
private:
    std::string name;
    int health;
    int xp;
    
public:

    std::string get_name() {return name;}
    int get_health() {return health;}
    int get_xp() {return xp; }
    
    Player(std::string name_val = "None", int health_val = 0, int xp_val = 0);
    
    //copy constructor
    Player(const Player &source);
    //Destructor
    ~Player() { std::cout << "Destructor called for: " << name << std::endl; }
    

};

// Overloaded Constructors
    
Player::Player(std::string name_val, int health_val, int xp_val) 
    : name{name_val}, health{health_val}, xp{xp_val} {
    
    std::cout << "Three args constructor for " << name << std::endl;
}

Player::Player(const Player &source) 
    :Player(source.name, source.health, source.xp) {
    //:name(source.name), health(source.health), xp(source.xp) {
        std::cout << "Copy constructor - made copy of: " << source.name << std::endl;
    }
    
void display_player(Player p) {
    std::cout << "Name: " << p.get_name() << std::endl;
    std::cout << "Health: " << p.get_health() << std::endl;
    std::cout << "Xp: " << p.get_xp() << std::endl;
    
}    
    

int main() {
    
    
    Player empty{"XXXXX", 100, 50};
    
    Player my_new_object(empty);
    
    display_player(empty);
    
    
    Player frank("Frank");
    Player hero("Hero", 100);
    Player villian ("VILLIAN", 100, 55);
    
    return 0;
}