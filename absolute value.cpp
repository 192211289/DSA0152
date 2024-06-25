#include <iostream>
#include <cmath> 
int absolute(int value) {
    return std::abs(value);
}

double absolute(double value) {
    return std::fabs(value);
}

int main() {
    int intValue = -42;
    double doubleValue = -42.42;

    std::cout << "Absolute value of " << intValue << " is " << absolute(intValue) << std::endl;
    std::cout << "Absolute value of " << doubleValue << " is " << absolute(doubleValue) << std::endl;

    return 0;
}

