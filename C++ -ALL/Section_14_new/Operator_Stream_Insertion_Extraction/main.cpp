//Section 14
//Mystring - starting point

#include <iostream>
#include <vector>
#include "Mystring.h"

using namespace std;

int main() {
    
    
    Mystring larry{"Larry"}; //overloaded constructor
    Mystring moe{"Moe"};
    Mystring curly;
    
    cout << "Enter the third stooge's first name: ";
    cin >> curly;
    
    cout << "The three stooges are " << larry << ", " << moe << ", and " << curly << endl;
    
    cout << "\nEnter the three stooges names separated by aspace: ";
    cin >> larry >> moe >> curly;
    
    cout << "THree stooges are " << larry << ", " << moe << ", and " << curly << endl;
    
    return 0;
    
}