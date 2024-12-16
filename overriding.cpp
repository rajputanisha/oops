#include <iostream>
using namespace std;









The virtual keyword in C++ is used to enable runtime polymorphism through virtual functions. It allows derived classes to override methods defined in a base class, ensuring that the correct method is called for an object, regardless of the type of reference (or pointer) used for the function call.

Key Concepts
Base Class and Derived Class: A base class can define a method as virtual, and derived classes can provide their own implementation of that method.
Dynamic Binding: When a virtual function is called on an object, C++ determines which function to execute at runtime based on the actual object type, not the type of the reference or pointer.
Need for the virtual Keyword
Achieving Polymorphism: The primary purpose of the virtual keyword is to achieve polymorphism. It allows you to call derived class methods through base class pointers or references, enabling more flexible and reusable code.

Dynamic Method Resolution: Without the virtual keyword, C++ uses static binding, meaning the method to be called is determined at compile time. With virtual functions, the method is resolved at runtime, allowing for more dynamic behavior.

Interface Implementation: The virtual keyword is essential when designing interfaces or abstract classes. It allows derived classes to implement specific behaviors while adhering to a common interface.

Extensibility: Using virtual functions makes it easier to extend the code. New derived classes can be added with their own implementations of virtual functions without modifying existing code.
class Animal {
public:
    virtual void sound() {
        
        cout << "Animal makes a sound" << endl;
    }
};

class Dog : public Animal {
public:
    void sound()  {
        cout << "Dog barks" << endl;
    }
};

class Cat : public Animal {
public:
    void sound()  {
        cout << "Cat meows" << endl;
    }
};
int main() {
    Animal* animal1 = new Dog();
    Animal* animal2 = new Cat();

    animal1->sound(); // Calls Dog's sound method
    animal2->sound(); // Calls Cat's sound method

    delete animal1;
    delete animal2;

    return 0;
}
