//Section 14
//Mystring - starting point

#include <iostream>
#include <vector>
#include "Mystring.h"

using namespace std;

int main() {
    
    
    Mystring s1 {"FRANK"};
    s1 = -s1;
    cout << s1 << endl;
    
    
    Mystring s2{"12345"};
    s1 = s2 * 3;
    cout << s1 << endl;         //123451234512345
    
    
    
    
    Mystring s3{"abcdef"};
    s3*= 5;
//    s3 = s3 * 5;
    cout << s3 << endl;         //abcdefabcdefabcdefabcdefabcdef
    
//    
//    Mystring s = "Frank";
//    //++s;
//    cout << s << endl;          //FRANK
//    
//    s = -s;
//    cout << s << endl;          //frank
//    
//    
//    
//    s ="Frank";
//    //s++;
//    cout << s << endl;          //FRANK
//    
//    s = -s;
//    cout << s << endl;          //frank
//    //result = s++;
//    cout << s << endl;          //FRANK
//    //cout << result << endl;     //frank
//    
    
    
    
    return 0;
    
}
