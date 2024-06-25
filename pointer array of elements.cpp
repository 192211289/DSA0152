#include <iostream>

int main() {
    const int size = 5;
    int arr[size] = {10, 20, 30, 40, 50};

    // Create a pointer to an array of integers
    int* ptr = arr;

    // Display the values of the array using the pointer
    std::cout << "Values of the array:" << std::endl;
    for (int i = 0; i < size; ++i) {
        std::cout << "Element " << i << ": " << *(ptr + i) << std::endl;
    }

    return 0;
}

