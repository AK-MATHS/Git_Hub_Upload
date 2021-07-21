#include <iostream>

using namespace std;


int main() {
    cout << "Hello, This is Abidemi's Cleaning Service" << endl;
    
    int no_srooms {0};
    int no_lrooms {0};
    cout << "Kindly enter the number of small and large rooms respectively separated by space: " << endl;
    cin >>  no_srooms >> no_lrooms;
    
    const double price_per_sroom {25.0};
    const double price_per_lroom {35.0};
    
    const double sales_tax {0.06};
    
    double testimate_without_tax = (price_per_sroom*no_srooms) + (price_per_lroom*no_lrooms);
    double testimate = testimate_without_tax * (1.0 + sales_tax);
    
    cout << "Your total estimate is: $" << testimate << endl;
    cout << "This is valid for 30 days" << endl;
    
    return 0;
}