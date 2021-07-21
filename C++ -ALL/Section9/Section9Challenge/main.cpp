#include <iostream>
#include <vector>

using namespace std;

int main() {
    
    vector <int> collection {2,3,1,4};
    
    bool choice{false};
    
    int new_element{};
    double collection_sum{};
    double collection_mean{};
    int collection_interim_least{};
    int collection_least{};
    int collection_interim_largest{};
    int collection_largest{};
    
    
    
    do {
        cout << "\nSelect from the following menu options" << endl;
    
        cout << "\nP - Print numbers";
        cout << "\nA - Add a number";
        cout << "\nM - Display mean of the numbers";
        cout << "\nS - Display the smallest number";
        cout << "\nL - Display the Largest number";
        cout << "\nQ - Quit";
        
        cout << "\nPlease enter your choice - P, A, M, S, L, or Q: ";
        
        char user_input {};
        cin >> user_input;
        
        choice = (user_input == 'q' || user_input == 'Q' || user_input == 'P' || user_input == 'p' || user_input == 'A' || user_input == 'a' || user_input == 'M' || user_input == 'm' || user_input == 'S' || user_input == 's' || user_input == 'L' || user_input == 'l' );
        
        if (choice == true) {
            
            switch (user_input) {
            
            
            case 'p' :
            case 'P' : 
                cout << "\nP - Print numbers" << endl;
                if (collection.size() > 0) {
                    for (auto element : collection) {
                        cout << element;
                    }
                }
                else {
                    cout << "\n[] - the list is empty" << endl;
                }
                cout << "\n" << endl;
                break;
            
            
            case 'a' :
            case 'A' :
                cout << "A - Add a number" << endl;
                cout << "Please enter an integer to add to the list: ";
                cin >> new_element;
                collection.push_back(new_element);
                cout << new_element << " was added to the List." << endl; 
                
                cout << "\n" << endl;
                break;
            
            
            case 'm' :
            case 'M' : 
                cout << "M - Display mean of the numbers" << endl;
                if (collection.size() > 0) {
                    for (auto element : collection) {
                        collection_sum = collection_sum + element;
                    }
                collection_mean = collection_sum / collection.size();
                }
                else {
                    collection_mean = 0;
                }
                cout << "The mean of the collection is " << collection_mean << "." << endl;
                
                cout << "\n" << endl;
                break;
            
            case 's' :
            case 'S' :
                cout << "S - Display the smallest number" << endl;
                //This code finds the least element in a vector
                if (collection.size() == 1){
                    collection_least = collection.at(0);
                    cout << "The smallest element in the list: " << collection_least << endl;
                }
                else if (collection.size() > 1) {
                    collection_least = collection.at(0);
                    for (int i{0}; i < collection.size() - 1; ++i) {
                        
                        collection_interim_least = (collection.at(i+1) <= collection.at(i)) ? collection.at(i+1) : collection.at(i);
                        
                        collection_least = (collection_least <= collection_interim_least) ? collection_least : collection_interim_least;
                        
                    }
                    cout << "The smallest element in the list: " << collection_least << endl;
                }
                else {
                    cout << "Unable to determine the smallest number - list is empty!" << endl;
                }
                
                cout << "\n" << endl;
                break;
            
            
            case 'l' :
            case 'L' : 
                cout << "Display the Largest number " << endl;
            
                if (collection.size() == 1){
                    collection_largest = collection.at(0);
                    cout << "The largest element in the list: " << collection_largest << endl;
                }
                else if (collection.size() > 0) {
                    collection_largest = collection.at(0);
                    for (int i{0}; i < collection.size() - 1; ++i) {
                        
                        collection_interim_largest = (collection.at(i+1) >= collection.at(i)) ? collection.at(i+1) : collection.at(i);
                        
                        collection_largest = (collection_largest >= collection_interim_largest) ? collection_largest : collection_interim_largest;
                        
                    }
                    cout << "The largest element in the list: " << collection_largest << endl;
                }
                else {
                    cout << "Unable to determine the largest element - list is empty!" << endl;
                }
            
                cout << "\n" << endl;
                break;
            
            
            case 'q' :
            case 'Q' : 
                cout << "Goodbye" << endl;
                choice = false;
                
                cout << "\n" << endl;
                break;
            
            
            default : cout << "Invalid choice" << endl;
                cout << "\n" << endl;
            
        }
        }
        
        else {
            cout << "Unknown selection, please try again" << endl;
            cout << "\n" << endl;
        }
    } while (choice);
    
    
    
    
    
    cout << endl;
    return 0;
}