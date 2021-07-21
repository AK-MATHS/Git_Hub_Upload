#include <iostream>
#include <vector>

using namespace std;


int main() {
    
    vector <int> vec {12, 23, 34, -45, 100, -99};
    
    bool found {false};
    int index {};
    int count {};
    if (vec.size() != 0) {
        while (!found) {
            if (vec.at(index) == -99) {
                found = true;
            }
            else {
                count++;
                index++;
                
            }
            if ((index + 1) == vec.size()) {
                count = vec.size() - 1;
                found = true;
            }
        }
        cout << count;
    }
    
    
    
    
    
    
    
    return 0;
}