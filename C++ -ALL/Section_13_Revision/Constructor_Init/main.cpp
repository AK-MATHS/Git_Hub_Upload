#include <iostream>
#include <string>

using namespace std;
class Player{
  
private:
    std::string name;
    int health;
    int xp;
    
public:
    void set_name(std::string name_val) {
        name = name_val;
    }
    // Overloaded Constructors
    Player() 
    : name{"none"}, health{0}, xp{0} {
        std::cout<< "No args constructor called" << std::endl;
    }
    Player(std::string name_val) 
    : name{name_val}, health{0},xp{0} {
        std::cout << "String arg constructor called " << std::endl;
    }
    Player(std::string name_val, int health_val, int xp_val) 
    : name{name_val}, health{health_val}, xp{xp_val} {
        std::cout << "Three args constructor called" << std::endl;
    }
    
    ~Player() {
        std::cout << "Destructor called for " << name << std::endl; 
    }
    
    
};


int main() {
    
    
    Player empty;
    Player frank("Frank");
    Player villian ("VILLIAN", 100, 55);
    
    return 0;
}