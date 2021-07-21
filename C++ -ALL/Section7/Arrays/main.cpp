#include <iostream>

using namespace std;

int main() {
    
    int test_score [5] {} ;
//    
//    cout << "First score at index 0: " << test_score[0] << endl;
//    cout << "Second score at index 1: " << test_score[1] << endl;
//    cout << "Third score at index 2: " << test_score[2] << endl;
//    cout << "Fourth score at index 3: " << test_score[3] << endl;
//    cout << "Fifth score at index 4: " << test_score[4] << endl;
//    
    cout << "Enter 5 test scores: ";
    cin >> test_score[0];
    cin >> test_score[1];
    cin >> test_score[2];
    cin >> test_score[3];
    cin >> test_score[4];
    cout << "First score at index 0: " << test_score[0] << endl;
    cout << "Second score at index 1: " << test_score[1] << endl;
    cout << "Third score at index 2: " << test_score[2] << endl;
    cout << "Fourth score at index 3: " << test_score[3] << endl;
    cout << "Fifth score at index 4: " << test_score[4] << endl;
    
    cout << "Notice what the value of the array name is: " << test_score << endl;
    
    return 0;
}