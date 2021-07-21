#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    
//    int *p;
//    cout << "Value of p is: " << p << endl;
//    cout << "Address of p is: " << &p << endl;
//    cout << "sizeof of p is: " << sizeof p << endl;
//    
//    p = nullptr; // set p to point nowhere
//    cout << "Value of p is: " << p << endl;
    
    
//    int *p1 {nullptr};
//    double *p2 {nullptr};
//    unsigned long long *p3 {nullptr};
//    vector <string> *p4 {nullptr};
//    string *p5 {nullptr};
//    
//    cout << "sizeof p1, p2, p3, p4, p5 is: " << sizeof p1 << " " << sizeof p2 << " " << sizeof p3 << " " << sizeof p4 << " " << sizeof p5 << endl;
        
    int score {10};
    double high_temp {100.7};
    
    int *score_ptr {nullptr};
    double *high_temp_ptr {nullptr};
    
    score_ptr = &score;
    high_temp_ptr = &high_temp;
    
    cout << score_ptr << endl;
    cout << high_temp_ptr << endl;
    cout << &score << endl;
    cout << &high_temp << endl;
    
    
    return 0;
}