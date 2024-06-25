#include <iostream>

class Vehicle {
public:
    
    virtual void drive() {
        std::cout << "Vehicle is being driven." << std::endl;
    }
};

// Derived class Car
class Car : public Vehicle {
public:
    void drive() override {
        std::cout << "Car is being driven." << std::endl;
    }
};

class Truck : public Vehicle {
public:
    void drive() override {
        std::cout << "Truck is being driven." << std::endl;
    }
};

int main() {
    Vehicle* vehicle1 = new Vehicle();
    Vehicle* vehicle2 = new Car();
    Vehicle* vehicle3 = new Truck();

    vehicle1->drive(); 
    vehicle2->drive(); 
    vehicle3->drive(); 
    delete vehicle1;
    delete vehicle2;
    delete vehicle3;

    return 0;
}

