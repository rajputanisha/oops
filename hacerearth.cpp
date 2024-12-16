// #include<iostream>
// using namespace std;
// #include <iostream>
// #include <string>

// void swapAdjacentChars(std::string& str) {
//   for (size_t i = 0; i < str.length() - 1; i += 2) {
//     char temp = str[i];
//     str[i] = str[i + 1];
//     str[i + 1] = temp;
//   }
// }

// int main() {
//   std::string originalStr = "hello";
//   std::cout << "Original string: " << originalStr << std::endl;

//   swapAdjacentChars(originalStr);
//   std::cout << "New string: " << originalStr << std::endl;

//   return 0;
// }
#include <iostream>
using namespace std;

// Base class
class Animal {
protected: // Changed to protected to allow derived classes to access
    int age;
    int weight;

public:
    // Constructor to initialize age and weight
    Animal(int a, int w) : age(a), weight(w) {}

    void eat() {
        cout << "Eating" << endl;
    }
};

// Derived class
class Dog : protected Animal { // Changed to protected inheritance
public:
    // Constructor to initialize base class members
    Dog(int a, int w) : Animal(a, w) {}

    void print() {
        cout << "Age: " << this->age << endl; // Accessing protected member
    }

    // Public method to access the eat function from Animal
    void performEat() {
        eat(); // Calling the base class method
    }
};

int main() {
    Dog d1(5, 20); // Initializing Dog with age and weight
    d1.print(); // This will print the age of the Dog
    d1.performEat(); // This will call the eat method
    return 0;
}






