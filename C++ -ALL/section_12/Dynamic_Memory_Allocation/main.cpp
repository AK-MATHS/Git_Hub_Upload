#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    
    int *int_ptr {nullptr}; // declared a pointer int_ptr that is pointing to an integer and intiallized it to zero
    
    int_ptr = new int; // allocated a new space on the heap for an integer
    
    cout << int_ptr << endl; // printout the newly allocated location
    
    cout << *int_ptr << endl; //printout the data at the newly allocated location on the heap
    
    *int_ptr = 100; // assign 100 to the data at the location that int_ptr is pointing to
    
    cout << *int_ptr << endl; // print the data at the location that int_ptr is pointing to
    
    delete int_ptr; // free up heap space
    
    cout << endl;
    
    size_t size{0};
    double *temp_ptr {nullptr};
    
    cout << "How many temps? ";
    cin >> size;
    
    
    temp_ptr = new double[size];
    cout << temp_ptr << endl;
    
    delete [] temp_ptr;
    
//    
//    //allocating storage for an array
//    
//    int *array_ptr {nullptr};
//    int size {};
//    
//    cout << "How big do you want the array? ";
//    cin >> size;
//    
//    array_ptr = new int[size]; // allocate array on the heap
//    
//    delete [] array_ptr;
//    
    
    
    
    return 0;
}