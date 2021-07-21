#include <iostream>

using namespace std;

int main() {
    
    int high_score {100};
    int low_score {65};
    
    
    
    
    
    
    //pointers to constants
    const int *score_ptr {&high_score};
    
//    *score_ptr = 86; //Error
//    score_ptr = &low_score; //Ok
    
    
    
    
    
    
    //constant pointers
    int *const score_ptr {&high_score};
    
//    *score_ptr = 86; //Ok
//    score_ptr = &low_score; //Error
    
    
    
    
    //constant pointers to constants
    
    const int *const score_ptr {&high_score};
    
//    *score_ptr = 86; //Error
//    score_ptr = &low_score; //Error
    
    
    cout << endl;
    return 0;
}