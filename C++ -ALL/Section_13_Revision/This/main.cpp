#include <iostream>
#include <string>

class Player {
private:
    std::string name;
    int health;
    int xp;
public:
    std::string get_name() const { return name;}
    void set_name(std::string name_val) { name = name_val;}
    
    //Overloaded Construstors
//    Player();
//    Player(std::string name_val);
    Player(std::string name_val = "None", int health_val = 0, int xp_val = 0);
};

//Player::PLayer()
//    :Player{"None", 0, 0

Player::Player(std::string name_val, int health_val, int xp_val)
    :name{name_val}, health{health_val}, xp{xp_val} {
        std::cout << "Constructor called for: " << name << std::endl;
    }


void display_player_name(const Player &p) {
    std::cout << p.get_name() << std::endl;
}

int main () {
    
    const Player villian {"Villian", 100};
    Player hero {"Hero", 100, 15};
    
    return 0;
}