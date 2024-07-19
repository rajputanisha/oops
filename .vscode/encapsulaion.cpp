/*****
 *Encapsulation is considered an attribute of the class in object-oriented programming (OOP) because it involves bundling the data (attributes) and the methods (functions or behaviors) that operate on the data into a single unit called a class. Here's why encapsulation is an essential characteristic of a class:

Data Hiding: Encapsulation allows a class to hide its internal state and only expose a controlled interface to the outside world. This means that the internal representation of an object is hidden from the outside, and only the methods provided by the class are accessible. This helps in protecting the integrity of the data by preventing unauthorized or unintended access.

Control Over Data: By using encapsulation, a class can control how its data is accessed and modified. Typically, this is achieved by using access specifiers like private, protected, and public. Private data members and methods are accessible only within the class itself, while public members can be accessed from outside the class. This allows the class to enforce certain rules and validations when the data is accessed or modified.

Modularity: Encapsulation helps in creating modular and reusable code. Each class is responsible for its own data and behavior, which can be developed, tested, and maintained independently. This modularity makes it easier to manage larger codebases.

Flexibility and Maintainability: Since the internal implementation details of a class are hidden, changes to the implementation can be made without affecting the code that uses the class. This makes the software more flexible and easier to maintain. For example, the internal logic of a method can be changed without requiring changes to the code that calls the method, as long as the method's interface remains the same.

Abstraction: Encapsulation is closely related to abstraction, another fundamental concept in OOP. While abstraction focuses on exposing only the necessary details and hiding the complexity, encapsulation is the technique used to achieve this by bundling the data and methods together and restricting access to the internal details.
 */
#include <iostream>
#include <string>

class Employee {
private:
    std::string name; // Private attribute
    double salary;    // Private attribute

public:
    // Constructor
    Employee(const std::string& name, double salary) {
        this->name = name;
        this->salary = salary;
    }

    // Getter for name
    std::string getName() const {
        return name;
    }

    // Setter for name
    void setName(const std::string& name) {
        if (!name.empty()) {
            this->name = name;
        } else {
            std::cerr << "Name cannot be empty!" << std::endl;
        }
    }

    // Getter for salary
    double getSalary() const {
        return salary;
    }

    // Setter for salary
    void setSalary(double salary) {
        if (salary > 0) {
            this->salary = salary;
        } else {
            std::cerr << "Salary must be positive!" << std::endl;
        }
    }

    // Method to display employee details
    void display() const {
        std::cout << "Name: " << name << ", Salary: " << salary << std::endl;
    }
};

int main() {
    // Creating an Employee object
    Employee emp("John Doe", 50000);

    // Accessing and modifying the employee's data using getters and setters
    emp.display();
    emp.setName("Jane Doe");
    emp.setSalary(60000);
    emp.display();

    // Trying to set invalid data
    emp.setName("");
    emp.setSalary(-10000);

    return 0;
}
