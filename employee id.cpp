#include <iostream>
#include <string>
using namespace std;
class Employee {
private:
    string name;
    int employeeID;
    double salary;

public:
    Employee(string empName, int empID, double empSalary) 
        : name(empName), employeeID(empID), salary(empSalary) {}
    void displayEmployeeDetails() const {
        cout << "Name: " << name << endl;
        cout << "Employee ID: " << employeeID << endl;
        cout << "Salary: $" << salary << endl;
    }
    void setSalaryBasedOnPerformance(char performanceGrade) {
        switch(performanceGrade) {
            case 'A':
                salary += salary * 0.10;
                break;
            case 'B':
                salary += salary * 0.05; 
                break;
            case 'C':
                break;
            case 'D':
                salary -= salary * 0.05; 
                break;
            case 'E':
                salary -= salary * 0.10;
                break;
            default:
                cout << "Invalid performance grade. No changes to salary." << endl;
                break;
        }
    }

    void setSalary(double newSalary) {
        if (newSalary >= 0) {
            salary = newSalary;
        } else {
            cout << "Invalid salary. Salary must be non-negative." << std::endl;
        }
    }

    double getSalary() const {
        return salary;
    }
};

int main() {
    Employee emp("John Doe", 12345, 50000.0);
    emp.displayEmployeeDetails();
    emp.setSalaryBasedOnPerformance('A');
    std::cout << "\nAfter performance evaluation:" << endl;
    emp.displayEmployeeDetails();

    return 0;
}

