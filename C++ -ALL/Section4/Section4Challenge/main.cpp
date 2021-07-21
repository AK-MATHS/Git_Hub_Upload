#include <iostream>

/*This is a multiline
 * comment
 * 
 */
using namespace std;

int main() {
    int favourite_number; // This is where my favourite number is stored
    std::cout << "Please enter your favourite number btw 1 and 100:" ;
    std::cin >> favourite_number;
    std::cout << "Amazing!! That's my favourite number too" << std::endl;
    
    std::cout << "No really!!, " << favourite_number << " is my favourite number"<< std::endl;
    return 0;
}