//Section 14
//Mystring - starting point

#include <iostream>
#include <vector>
#include "Mystring.h"

using namespace std;

int main() {
    Mystring a{"Hello"};        //overloaded constructor
    a = Mystring{"Hola"};
    a = "Bonjour";
    
    Mystring b;                 //no-args constructor
    //b = a;                      //Move assignment
                                //b.operator=(a)
    b = "This is a test";       //b.operator=("This is a test");
    
    
    
    Mystring empty;     //no-args constructor
    Mystring larry("Larry"); //overloaded constructor
    Mystring stooge {larry};//COPY CONSTRUCTOR
    Mystring stooges;
    
    empty.display();
    larry.display();
    stooge.display();
    empty.display();
    
    stooges = "Larry, Moe, and Curly";
    stooges.display();
    
    vector<Mystring>stooges_vec;
    stooges_vec.push_back("larry");
    stooges_vec.push_back("Moe");
    stooges_vec.push_back("Curly");
    
    
    cout << "=== Loop 1 ========================" << endl;
    for (const Mystring &s: stooges_vec) {
        s.display();
    }
    
    cout << "=== Loop 2 ========================" << endl;
    for (Mystring &s: stooges_vec) {
        s = "Changed";
    }
    
    cout << "=== Loop 3 ========================" << endl;
    for (const Mystring &s: stooges_vec) {
        s.display();
    }
    
    
    return 0;
}