#include <iostream>

using namespace std;

int main() {
    int num1 {200};
    int num2 {100};
    
//    cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
    int result {0};
    result = num1 + num2;
    cout << num1 << " + " << num2 << " = " << result << endl;
    
    result = num2 / num1 ;
    cout << num2 << " / " << num1 << " = " << result << endl;
    
    result = num2 % num1 ;
    cout << num2 << " % " << num1 << " = " << result << endl;
    
    
    return 0;
}