#include <iostream>
#include <stdexcept> // for std::runtime_error

using namespace std;

// Function to calculate division and throw exceptions
double divide(int numerator, int denominator) {
    if (denominator == 0) {
        throw std::runtime_error("Division by zero error");
    }
    
    return static_cast<double>(numerator) / denominator;
}

int main() {
    int numerator, denominator;
    
    // Get user input
    cout << "Enter numerator: ";
    cin >> numerator;
    cout << "Enter denominator: ";
    cin >> denominator;
    
    try {
        // Attempt division
        double result = divide(numerator, denominator);
        cout << "Result of division: " << result << endl;
    }
    catch (const std::runtime_error& e) {
        cerr << "Exception caught: " << e.what() << endl;
    }
    catch (...) {
        cerr << "Unknown exception caught" << endl;
    }
    
    cout << "Program continues after catch blocks" << endl;
    
    return 0;
}

