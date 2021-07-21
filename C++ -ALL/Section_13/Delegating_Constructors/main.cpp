#include <iostream>
#include <string>
using namespace std;

class Player
{
private:
    std::string name{"XXXXXX"};
    int health;
    int xp;
public:
    void set_name(std::string name_val) {
        name = name_val;
    }
    std::string get_name() {
        return name;
    }
Player() 
    :Player {"None",0,0}{
        cout << "No-args constructor" << endl;
}
Player(std::string name_val) 
    :Player {name_val, 0, 0} {
        cout << "One-args constructor" << endl;
}
Player(std::string name_val, int health_val, int xp_val) 
    :name {name_val}, health {health_val}, xp {xp_val} {
        cout << "Three-args constructor" << endl;
}
};





int main() {
    Player empty;
    Player frank{"Frank"};
    Player villian {"Villian", 100, 55};
    return 0;
}