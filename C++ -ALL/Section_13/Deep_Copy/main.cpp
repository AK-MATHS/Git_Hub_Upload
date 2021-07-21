#include <iostream>

using namespace std;

class Deep
{
private:
    int *data;
public:
    void set_data_value(int d) { *data = d;}
    int get_data_value() {return *data;}
    Deep(int d);
    Deep(const Deep &source);
    ~Deep();
};

//Deep Constructor
Deep::Deep(int d) {
    data = new int;
    *data = d;
}

//Deep Destructor

Deep::~Deep() {
    delete data; //free storage
    cout << "Destructor freeing data" << endl;
}

//Deep copy constructor
//Deep::Deep(const Deep &source)
//{
//    data = new int;
//    *data = *source.data;
//    cout << "Copy constructor - Deep" << endl;
//}


//Delegated Deep copy constructor
Deep::Deep(const Deep &source)
    :Deep{*source.data} {
        cout << "Copy constructor - deep" << endl;
    }

void display_deep(Deep s) {
    cout << s.get_data_value() << endl;
}


int main() {
    
    Deep obj1 {100};
    display_deep(obj1);
    
    obj1.set_data_value(1000);
    Deep obj2 {obj1};
    
    return 0;
}