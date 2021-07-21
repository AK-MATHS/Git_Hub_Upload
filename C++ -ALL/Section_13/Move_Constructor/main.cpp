#include <iostream>

using namespace std;

class Move
{
private:
    int *data;
public:
    void set_data_value(int d) { *data = d;}
    int get_data_value() {return *data;}
    Move(int d);
    Move(const Move &source);
    Move(Move &&source);
    ~Move();
};

Move::Move(Move &&source)
    :data{source.data} {
        source.data = nullptr;
    }

int main() {
    std::cout << "Hello World" << std::endl;
    return 0;
}