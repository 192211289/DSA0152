#include <iostream>

int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int main() {
    int (*ptr)(int, int);
    ptr = add;

    int result_add = ptr(5, 3);
    std::cout << "Result of add function: " << result_add << std::endl;

    ptr = subtract;

    int result_subtract = ptr(5, 3);
    std::cout << "Result of subtract function: " << result_subtract << std::endl;

    return 0;
}

