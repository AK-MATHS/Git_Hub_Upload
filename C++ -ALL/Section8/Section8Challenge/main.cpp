// Section 8 Challenge
/* 
 * For this program I will be using US dollars and cents.
 * 
 * Write a program that asks the user to enter the following:
 * An integer representing the number of cents
 * 
 * You may assume that the number of cents entered is greater than or equal to zero
 * 
 * The program should then display how to provide that change to the user
 * 
 * In the US:
 *      1 dollar is 100cents
 *      1 quater is 25 cents
 *      1 dime is 10 cents
 *      1 nickel is 5 cents, and 
 *      1 penny is 1 cent.
 * 
 * Here is a sample run;
 * 
 * Enter an amount in cents: 92
 * 
 * You can provide this change as follows:
 * dollars: 0
 * quarters: 3
 * dimes: 1
 * nickels: 1
 * pennies: 2
 * 
 * 
 * 
 * 
 * 
 */
 





#include <iostream>

using namespace std;

int main() {
    
    const int dollar_divisor {100};
    const int quarter_divisor {25};
    const int dime_divisor {10};
    const int nickel_divisor {5};
    
    
    
    int cents {};
    cout << "Enter an amount in cents: ";
    cin >> cents;
    
    
    int dollar_factor {};
    int quarter_factor {};
    int dime_factor {};
    int nickel_factor {};
    int penny_factor {};
    
    
    int dollar_remainder {};
    int quarter_remainder {};
    int dime_remainder {};
    int nickel_remainder {};
    
    
    dollar_factor = cents / dollar_divisor;
    dollar_remainder = cents % dollar_divisor;
    
    quarter_factor = dollar_remainder / quarter_divisor;
    quarter_remainder = dollar_remainder % quarter_divisor;
    
    dime_factor = quarter_remainder / dime_divisor;
    dime_remainder = quarter_remainder % dime_divisor;
    
    nickel_factor = dime_remainder / nickel_divisor;
    nickel_remainder = dime_remainder / nickel_divisor;
    
    
    penny_factor = nickel_remainder;
    
    
    cout << "\nYou can provide this change as follows: ";
    cout << "\ndollars  : " << dollar_factor;
    cout << "\nquarters : " << quarter_factor;
    cout << "\ndimes    : " << dime_factor;
    cout << "\nnickels  : " << nickel_factor;
    cout << "\npennies  : " << penny_factor << endl;
    
    
    
    
    return 0;
}