#include <iostream>
#include <stdexcept> 
using namespace std;
void processInput(int value) {
    if (value == 0) {
        throw invalid_argument("Invalid argument: Value cannot be zero.");
    } else if (value < 0) {
        throw out_of_range("Out of range: Value must be positive.");
    }
    
    cout << "Input value is valid: " << value << endl;
}

int main() {
    try {
        processInput(10);   
        processInput(0);    
        processInput(-5);   
    } catch (const invalid_argument& e) {
        cerr << "Invalid argument exception caught: " << e.what() << endl;
    } catch (const out_of_range& e) {
        cerr << "Out of range exception caught: " << e.what() << endl;
    } catch (const exception& e) {
        cerr << "Standard exception caught: " << e.what() << endl;
    } catch (...) {
        cerr << "Unknown exception caught." << endl;
    }
    
    return 0;
}

