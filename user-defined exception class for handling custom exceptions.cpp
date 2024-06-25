#include <iostream>
#include <stdexcept>
#include <string>

using namespace std;

class CustomException : public std::runtime_error {
public:
    CustomException(const string& message) : std::runtime_error(message) {}
};

void processNumber(int num) {
    if (num < 0) {
        throw CustomException("Number cannot be negative");
    } else if (num == 0) {
        throw CustomException("Number should not be zero");
    } else {
        cout << "Number processed successfully: " << num << endl;
    }
}

int main() {
    try {
        int number;
        cout << "Enter a positive number (except zero): ";
        cin >> number;
        
        processNumber(number);
    }
    catch (const CustomException& e) {
        cerr << "Custom Exception Caught: " << e.what() << endl;
    }
    catch (const std::exception& e) {
        cerr << "Standard Exception Caught: " << e.what() << endl;
    }
    catch (...) {
        cerr << "Unknown Exception Caught" << endl;
    }
    
    cout << "Program continues after catch blocks" << endl;
    
    return 0;
}

