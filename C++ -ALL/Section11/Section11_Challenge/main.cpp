#include <iostream>
#include <vector>


using namespace std;

int display_menu(vector<int> &v);
int input(vector<int> &v);
int print_number(vector<int> &v);
int add_a_number(vector<int> &v);
int mean_of_collection(vector<int> &v);
int smallest_number(vector<int> &v);
int largest_number(vector<int> &v);
void quit();
void invalid();

int new_element{};
double collection_sum{};
double collection_mean{};
int collection_interim_least{};
int collection_least{};
int collection_interim_largest{};
int collection_largest{};
vector <int> collection {2,3,1,4};




int display_menu(vector<int> &v) {
    cout << "\nSelect from the following menu options" << endl;
    
    cout << "\nP - Print numbers";
    cout << "\nA - Add a number";
    cout << "\nM - Display mean of the numbers";
    cout << "\nS - Display the smallest number";
    cout << "\nL - Display the Largest number";
    cout << "\nQ - Quit";
        
    cout << "\nPlease enter your choice - P, A, M, S, L, or Q: ";
    
    input(collection);    
    return collection;
}

int input(vector<int> &v) {
    char user_input {};
    cin >> user_input;
    
    if (user_input == 'q' || user_input == 'Q') {
        quit();
    }
    else if (user_input == 'P' || user_input == 'p') {
        print_number(collection);
    }
    else if (user_input == 'A' || user_input == 'a') {
        add_a_number(collection);
    }
    else if (user_input == 'M' || user_input == 'm') {
        mean_of_collection(collection);
    }
    else if (user_input == 'S' || user_input == 's') {
        smallest_number(collection);
    }
    else if (user_input == 'L' || user_input == 'l' ) {
        largest_number(collection);
    }
    else {
        invalid();
    }
    return collection;
}

int print_number(vector<int> &v) {
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
    return collection;
}

int add_a_number(vector<int> &v) {
    cout << "A - Add a number" << endl;
    cout << "Please enter an integer to add to the list: ";
    cin >> new_element;
    collection.push_back(new_element);
    cout << new_element << " was added to the List." << endl; 
                
    cout << "\n" << endl;
    return collection;
}

int mean_of_collection(vector<int> &v) {
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
    return collection;
}

int smallest_number(vector<int> &v) {
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

    return collection;
}

int largest_number(vector<int> &v) {
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
    return collection;

}

void quit() {
     
    cout << "Goodbye" << endl;
        
    cout << "\n" << endl;

}

void invalid() {
    cout << "Invalid choice" << endl;
    cout << "\n" << endl;
    
    cout << "Unknown selection, please try again" << endl;
    cout << "\n" << endl;

}




int main() {
    vector <int> collection {2,3,1,4};
    int new_element{};
    double collection_sum{};
    double collection_mean{};
    int collection_interim_least{};
    int collection_least{};
    int collection_interim_largest{};
    int collection_largest{};
    
    display_menu(collection);
    
    
    return 0;
}



//choice = (user_input == 'q' || user_input == 'Q' || user_input == 'P' || user_input == 'p' || user_input == 'A' || user_input == 'a' || user_input == 'M' || user_input == 'm' || user_input == 'S' || user_input == 's' || user_input == 'L' || user_input == 'l' );
