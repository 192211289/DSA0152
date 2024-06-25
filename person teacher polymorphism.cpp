#include <iostream>
#include <string>

class Person {
protected:
    std::string name;

public:
    Person(const std::string& name) : name(name) {}

    virtual void greet() {
        std::cout << "Hello, I am " << name << ", a Person." << std::endl;
    }
};
class Student : public Person {
private:
    std::string major;

public:
    Student(const std::string& name, const std::string& major)
        : Person(name), major(major) {}
    void greet() override {
        std::cout << "Hello, I am " << name << ", a Student majoring in " << major << "." << std::endl;
    }
};

class Teacher : public Person {
private:
    std::string subject;

public:
    Teacher(const std::string& name, const std::string& subject)
        : Person(name), subject(subject) {}

    void greet() override {
        std::cout << "Hello, I am " << name << ", a Teacher teaching " << subject << "." << std::endl;
    }
};

int main() {
    Person* person1 = new Person("kanish");
    Person* person2 = new Student("fathima", "Computer Science");
    Person* person3 = new Teacher("malathy", "Mathematics");

    person1->greet(); 
    person2->greet();
    person3->greet(); 

    delete person1;
    delete person2;
    delete person3;

    return 0;
}

