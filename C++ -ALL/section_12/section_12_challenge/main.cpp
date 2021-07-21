#include <iostream>

using namespace std;

int *apply_all(const int *const first_array, const size_t first_array_size, const int *const second_array, const size_t second_array_size) {
    
    int *final_array_ptr {nullptr};
    
    final_array_ptr = new int[first_array_size * second_array_size];
    
    size_t index {0};
    
    for (size_t j{0}; j < second_array_size; j++) {
        for (size_t i{0}; i < first_array_size; i++) {
            *(final_array_ptr + index) = *(first_array + i) * *(second_array + j);
            index++;
        }
    }
    
    return final_array_ptr;
}

void print(const int *const array, size_t size) {
    
    for (size_t i{0}; i < size; ++i) {
        cout << array[i] << " ";
    }
    cout << endl;
}



int main() {
    const size_t array1_size {5};
    const size_t array2_size {3};
    
    int array1[] {1, 2, 3, 4, 5};
    int array2[] {10, 20, 30};
    
    cout << "Array 1: ";
    print(array1,array1_size);
    
    cout << "Array 2: ";
    print(array2, array2_size);
    
    int *results = apply_all(array1, array1_size, array2, array2_size);
    constexpr size_t results_size {array1_size * array2_size};
    
    cout << "Result: ";
    print(results, results_size);
    
    delete [] results;
    
    cout << endl;
    return 0;
}