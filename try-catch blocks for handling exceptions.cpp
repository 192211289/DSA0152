#include <iostream>
using namespace std;
void divideNumbers(int numerator, int denominator) {
    if (denominator == 0) {
        throw runtime_error("Division by zero error.");
    }
    
    cout << "Result of division: " << numerator / denominator << endl;
}

int main() {
    int num1, num2;
    
    cout << "Enter numerator: ";
    cin >> num1;
    cout << "Enter denominator: ";
    cin >> num2;
    
    try {
        divideNumbers(num1, num2);
    } catch (const runtime_error& e) {
        cerr << "Exception caught: " << e.what() << endl;
    }
    
    cout << "End of program." << endl;
    
    return 0;
}

