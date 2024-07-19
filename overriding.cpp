#include <iostream>
using namespace std;

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
