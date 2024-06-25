#include <iostream>
#include <string>

class Animal {
protected:
    std::string name;
    std::string species;
    int age;

public:
    Animal(const std::string& name, const std::string& species, int age)
        : name(name), species(species), age(age) {}

    void setName(const std::string& name) { this->name = name; }
    std::string getName() const { return name; }

    void setSpecies(const std::string& species) { this->species = species; }
    std::string getSpecies() const { return species; }

    void setAge(int age) { this->age = age; }
    int getAge() const { return age; }
};

class Cat : public Animal {
private:
    std::string color;
    std::string breed;

public:
    Cat(const std::string& name, int age, const std::string& color, const std::string& breed)
        : Animal(name, "Cat", age), color(color), breed(breed) {}

    void setColor(const std::string& color) { this->color = color; }
    std::string getColor() const { return color; }

    void setBreed(const std::string& breed) { this->breed = breed; }
    std::string getBreed() const { return breed; }
};

class Dog : public Animal {
private:
    double weight;
    std::string breed;

public:
    Dog(const std::string& name, int age, double weight, const std::string& breed)
        : Animal(name, "Dog", age), weight(weight), breed(breed) {}

    void setWeight(double weight) { this->weight = weight; }
    double getWeight() const { return weight; }

    void setBreed(const std::string& breed) { this->breed = breed; }
    std::string getBreed() const { return breed; }
};

int main() {
    Cat myCat("Whiskers", 3, "Black", "Siamese");
    Dog myDog("Buddy", 5, 25.5, "Labrador");

    std::cout << "Cat Details:" << std::endl;
    std::cout << "Name: " << myCat.getName() << std::endl;
    std::cout << "Age: " << myCat.getAge() << std::endl;
    std::cout << "Species: " << myCat.getSpecies() << std::endl;
    std::cout << "Color: " << myCat.getColor() << std::endl;
    std::cout << "Breed: " << myCat.getBreed() << std::endl;

    std::cout << std::endl;

    std::cout << "Dog Details:" << std::endl;
    std::cout << "Name: " << myDog.getName() << std::endl;
    std::cout << "Age: " << myDog.getAge() << std::endl;
    std::cout << "Species: " << myDog.getSpecies() << std::endl;
    std::cout << "Weight: " << myDog.getWeight() << std::endl;
    std::cout << "Breed: " << myDog.getBreed() << std::endl;

    return 0;
}

