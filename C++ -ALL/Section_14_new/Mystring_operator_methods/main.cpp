//Section 14
//Mystring - starting point

#include <iostream>
#include <vector>
#include "Mystring.h"

using namespace std;

int main() {
    
    
    Mystring larry{"Larry"}; //overloaded constructor
    Mystring moe{"Moe"};
    
    
    Mystring stooge = larry;
    larry.display();
    moe.display();
    
    std::cout << (larry == moe) << std::endl;
    std::cout << (larry == stooge) << std::endl;
    
    larry.display();
    Mystring larry2 = -larry;
    larry2.display();
    
    Mystring stooges = larry + "Moe";
    
    Mystring two_stooges = moe + " " + "Larry";
    two_stooges.display();
    
    
    
    return 0;
}