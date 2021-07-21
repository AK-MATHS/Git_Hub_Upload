#include <iostream>
#include "Mystring.h"
#include <vector>

using namespace std;



int main() {
    
    Mystring a {"Hello"};
    Mystring b;
    b = a;
    
    b = "This is a test";
    
    
    
    
    Mystring empty;             // no-args constructor
    Mystring larry{"Larry"};    // overloaded constructor
    Mystring stooge{larry};     // copy constructor
    Mystring stooges;           // no-args constructor
    
    empty = stooge;             // copy assignment operator
    
    empty.display();            // Larry:5
    larry.display();
    stooge.display();
    empty.display();
    
    stooges = "Larry, Moe, and Curly";
    stooges.display();
    
    std::vector<Mystring>stooges_vec;
    stooges_vec.push_back("Larry");
    stooges_vec.push_back("Moe");
    stooges_vec.push_back("Curly");
    
    std::cout << "=== Loop 1 ========================" << std::endl;
    for (const Mystring &s: stooges_vec) {
        s.display();               //Larry, Moe, Curly
    }
    
    std::cout << "=== Loop 2 ========================" << std::endl;
    for (Mystring &s: stooges_vec) {
        s = "Changed";               //Copy assignment
    }
    
    std::cout << "=== Loop 3 ========================" << std::endl;
    for (const Mystring &s: stooges_vec) {
        s.display();                 // Changed, Changed, Changed
    }
    
    return 0;
}