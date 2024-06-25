#include <iostream>

using namespace std;

int main() {
    try {
        try {
            int numerator, denominator;
            
            cout << "Enter numerator: ";
            cin >> numerator;
            cout << "Enter denominator: ";
            cin >> denominator;
            
            if (denominator == 0) {
                throw "Division by zero error";
            }
            
            double result = static_cast<double>(numerator) / denominator;
            
            cout << "Result of division: " << result << endl;
        }
        catch (const char* msg) {
            cerr << "Inner Exception: " << msg << endl;
            throw;  
        }
    }
    catch (...) {
        cerr << "Exception caught in outer block" << endl;
    }
    
    cout << "Program continues after catch blocks" << endl;
    
    return 0;
}

