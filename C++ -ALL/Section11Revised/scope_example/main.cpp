#include <iostream>

using namespace std;

void global_example();
void local_example(int x);
void static_local_example();

int num {300};







void global_example() {
    cout << "\nGlobal num is: " << num << " in global_example - start" << endl;
    num *= 2;
    cout << "\nGlobal num is: " << num << " in global_example - end" << endl;
}

void local_example(int x) {
    int num {100};
    cout << "\nLocal num is: " << num << " in Local_example - start" << endl;
    num = x;
    cout << "\nLocal num is: " << num << " in Local_example - end" << endl;
}

void static_local_example() {
    static int num {5000};
    cout << "\nLocal static num is: " << num << " in static_Local_example num - start" << endl;
    num += 1000;
    cout << "\nLocal static num is: " << num << " in static_Local_example num - end" << endl;
}

int main() {
    
    int num {100}; 
    int num1 {500};
    
    cout << "Local num is: " << num << " in main" << endl;
    
    {
        int num {200};
        cout << "Local num is: " << num << " in inner block in main" << endl;
        cout << "inner block in main can see out - num1 is: " << num1 << endl;
    }
    
    cout << "Local num is: " << num << " in main" << endl;
    
    local_example(10);
    local_example(20);
    
    global_example();
    global_example();
    
    
    static_local_example();
    static_local_example();
    static_local_example();
    
    std::cout << "Hello World" << std::endl;
    return 0;
}