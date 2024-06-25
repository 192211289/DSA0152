#include <iostream>

void printArray(const int* arr, int size) {
    std::cout << "Integer array: ";
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

void printArray(const double* arr, int size) {
    std::cout << "Double array: ";
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

void printArray(const char* arr, int size) {
    std::cout << "Character array: ";
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

int main() {
    int intArray[] = {1, 2, 3, 4, 5};
    double doubleArray[] = {1.1, 2.2, 3.3, 4.4, 5.5};
    char charArray[] = {'a', 'b', 'c', 'd', 'e'};

    int intSize = sizeof(intArray) / sizeof(intArray[0]);
    int doubleSize = sizeof(doubleArray) / sizeof(doubleArray[0]);
    int charSize = sizeof(charArray) / sizeof(charArray[0]);

    printArray(intArray, intSize);
    printArray(doubleArray, doubleSize);
    printArray(charArray, charSize);

    return 0;
}

