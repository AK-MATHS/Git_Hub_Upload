#include <iostream>
#include <vector>

using namespace std;

int main() {
    
    
    vector <int> vec {2,3,4};
    
    int result{0};
    
    if (vec.size() > 1) {
        for (int i{0}; i < (vec.size() - 1); ++i) {
            int j = i + 1;
            for (j; j < vec.size(); ++j) {
                result = result + (vec.at(i) * vec.at(j));
                
            }
        }
        
    }
    else {
        result = 0;
    }
    
    cout << result;
    
    
    
    
    
    
    
    
    cout << endl;
    return 0;
}