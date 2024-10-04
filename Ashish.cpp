#include <iostream>

class Person {
private:
    std::string name; // Private attribute
    int age;         // Private attribute

public:
    // Public method to set name
    void setName(std::string n) {
        name = n; // Update name
    }

    // Public method to set age
    void setAge(int a) {
        if (a > 0) { // Ensure the age is valid
            age = a; // Update age
        }
    }

    // Public method to display person details
    void displayInfo() const {
        std::cout << "Name: " << name << ", Age: " << age << "\n";
    }
};

int main() {
    Person person; // Create a Person object

    person.setName("Alice"); // Set the name
    person.setAge(25);        // Set the age
    person.displayInfo();     // Display person details

    return 0;
}
