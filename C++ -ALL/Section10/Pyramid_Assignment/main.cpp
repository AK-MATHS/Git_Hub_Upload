#include <iostream>
#include <string>

using namespace std;

int main() {
    
    string entry_string {};
    cout << "Please enter your string: ";
    getline(cin, entry_string);
    
    size_t length_entry_string = entry_string.length();
    size_t used_length_entry_string = length_entry_string;
    
    for (size_t increment{0}; increment < length_entry_string; increment ++) {

        string front_space (used_length_entry_string - 1, ' '); //handles the front spaces
        
        string first_half = entry_string.substr(0, increment+1);
        size_t length_first_half = first_half.length();
        
        string second_half {};
        
        //because of the potential of the index of our next loop to enter into the negative domain. 
        //Done to handle exception
        int used = length_first_half - 2; 
        
        if (length_first_half > 1) {
            
//            mirrored part of the display
            for (int i {used}; i >= 0; i--) {
                
                second_half += first_half.at(i);
            }
        }
        else {
            second_half = {};
        }
        
        
        cout << front_space + first_half + second_half << endl;
        
        used_length_entry_string--;
        
    
    }    
    
    cout << endl;
    return 0;
}