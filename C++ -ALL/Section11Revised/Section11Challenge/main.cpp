//Section 11
//Challenge - Solution

#include <iostream>
#include <vector>

using namespace std;



void print_vector(const vector<int>&v);

void add_a_number(vector<int>&v);

void mean_of_collection(vector<int>v);

void smallest_num_in_collection(vector<int>v);

void largest_num_in_collection(vector<int>v);

void display();

void request_user_input(vector<int>&v);

void decision(vector<int>&v, char &X);

void action(vector<int>&v, char &X);

void quit();

void invalid(vector<int>&v, char &X);



void print_vector(const vector<int>&v) {
    cout << "\nP - Print numbers" << endl;
    if (v.size() > 0) {
        cout << "-------------------------------------------------------------" << endl;
        cout << "[ ";
        for (auto element : v) {
             cout << element << " ";
        }
        cout << "]" << endl;
        cout << "-------------------------------------------------------------" << endl;
    }
    else {
        cout << "-------------------------------------------------------------" << endl;
        cout << "\n[] - the list is empty" << endl;
        cout << "-------------------------------------------------------------" << endl;
    }
     cout << "\n" << endl;
    
}

void add_a_number(vector<int>&v) {
    int new_element{};
    cout << "A - Add a number" << endl;
    cout << "Please enter an integer to add to the list: ";
    cin >> new_element;
    v.push_back(new_element);
    cout << "-------------------------------------------------------------" << endl;
    cout << new_element << " was added to the List." << endl; 
    cout << "-------------------------------------------------------------" << endl;
    cout << "\n" << endl;

}

void mean_of_collection(const vector<int>v) {
    
    double collection_sum{};
    double collection_mean{};
    
    cout << "M - Display mean of the numbers" << endl;
    if (v.size() > 0) {
        for (auto element : v) {
            collection_sum = collection_sum + element;
        }
        collection_mean = collection_sum / v.size();
    }
    else {
        collection_mean = 0;
    }
    cout << "-------------------------------------------------------------" << endl;
    cout << "The mean of the collection is " << collection_mean << "." << endl;
    cout << "-------------------------------------------------------------" << endl;
    cout << "\n" << endl;
}

void smallest_num_in_collection(const vector<int>v) {
    int collection_interim_least{};
    int collection_least{};
    
    cout << "S - Display the smallest number" << endl;
    //This code finds the least element in a vector
    if (v.size() == 1){
        collection_least = v.at(0);
        cout << "-------------------------------------------------------------" << endl;
        cout << "The smallest element in the list: " << collection_least << endl;
        cout << "-------------------------------------------------------------" << endl;
    }
    else if (v.size() > 1) {
        collection_least = v.at(0);
        for (int i{0}; i < v.size() - 1; ++i) {
            
            collection_interim_least = (v.at(i+1) <= v.at(i)) ? v.at(i+1) : v.at(i);
                        
            collection_least = (collection_least <= collection_interim_least) ? collection_least : collection_interim_least;
        }
        cout << "-------------------------------------------------------------" << endl;
        cout << "The smallest element in the list: " << collection_least << endl;
        cout << "-------------------------------------------------------------" << endl;
    }
    else {
        cout << "-------------------------------------------------------------" << endl;
        cout << "Unable to determine the smallest number - list is empty!" << endl;
        cout << "-------------------------------------------------------------" << endl;
    }
                
    cout << "\n" << endl;
}

void largest_num_in_collection(const vector<int>v) {
    
    int collection_interim_largest{};
    int collection_largest{};
    
    cout << "Display the Largest number " << endl;
            
    if (v.size() == 1){
        collection_largest = v.at(0);
        cout << "-------------------------------------------------------------" << endl;
        cout << "The largest element in the list: " << collection_largest << endl;
        cout << "-------------------------------------------------------------" << endl;
    }
    else if (v.size() > 0) {
        collection_largest = v.at(0);
        for (int i{0}; i < v.size() - 1; ++i) {
                        
            collection_interim_largest = (v.at(i+1) >= v.at(i)) ? v.at(i+1) : v.at(i);
                        
            collection_largest = (collection_largest >= collection_interim_largest) ? collection_largest : collection_interim_largest;
                        
        }
        cout << "-------------------------------------------------------------" << endl;
        cout << "The largest element in the list: " << collection_largest << endl;
        cout << "-------------------------------------------------------------" << endl;
    }
    else {
        cout << "-------------------------------------------------------------" << endl;
        cout << "Unable to determine the largest element - list is empty!" << endl;
        cout << "-------------------------------------------------------------" << endl;
    }
            
    cout << "\n" << endl;
}


void display() {
    cout << "-------------------------------------------------------------" << endl;
    cout << "\nSelect from the following menu options" << endl;

    cout << "\nP - Print numbers";
    cout << "\nA - Add a number";
    cout << "\nM - Display mean of the numbers";
    cout << "\nS - Display the smallest number";
    cout << "\nL - Display the Largest number";
    cout << "\nQ - Quit";
    cout << "\n-------------------------------------------------------------" << endl;
}

void request_user_input(vector<int>&v) {
    
    cout << "\nPlease enter your choice - P, A, M, S, L, or Q: ";
        
    char user_input {};
    cin >> user_input;
    decision(v, user_input);
    
//    return user_input;
}

void decision(vector<int>&v, char &X) {
    
//    char X {user_input};
    
    if (X == 'P' || X == 'p' || X == 'A' || X == 'a' || X == 'M' || X == 'm' || X == 'S' || X == 's' || X == 'L' || X == 'l' ) {
        action(v,X);
    }
    
    else if(X == 'q' || X == 'Q') {
        quit();
    }
    else {
        invalid(v,X);
    }
}

void action(vector<int>&v, char &X) {
    
//    char X {user_input};
    
    if (X == 'P' || X == 'p') {
        print_vector(v);
    }
    
    else if (X == 'A' || X == 'a'){
        add_a_number(v);
    }
    else if (X == 'M' || X == 'm') {
        mean_of_collection(v);
    }
    else if (X == 'S' || X == 's') {
        smallest_num_in_collection(v);
    }
    
    else if (X == 'L' || X == 'l') {
        largest_num_in_collection(v);
    }
    
    display();
    request_user_input(v);
    decision(v,X);
    
    
}

void quit() {
    cout << "Goodbye" << endl;
    cout << "\n" << endl;
    return;
}

void invalid(vector<int>&v, char &X) {
    cout << "Invalid choice" << endl;
    cout << "Unknown selection, please try again" << endl;
    cout << "\n" << endl;
    request_user_input(v);
//    decision(v, X);
}

int main() {
    
    vector <int> collection {1, 2, 3, 4};
    
    display();
    request_user_input(collection);
    
    
    
    
    cout << endl;
    return 0;
}