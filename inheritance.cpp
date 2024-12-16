// #include <iostream>
// using namespace std;

// // Base class
// class Animal {
// protected: // Changed to protected to allow derived classes to access
//     int age;
//     int weight;

// public:
//     // Constructor to initialize age and weight
//     Animal(int a, int w) : age(a), weight(w) {}

//     void eat() {
//         cout << "Eating" << endl;
//     }
// };

// // Derived class
// class Dog : public Animal { // Changed to protected inheritanceThis means that they cannot be accessed from outside the derived class.
// public:
//     // Constructor to initialize base class members
//     Dog(int a, int w) : Animal(a, w) {}

//     void print() {
//         cout << "Age: " << this->age << endl; // Accessing protected member
//     }

//     // // Public method to call the eat function from Animal
//      void performEat() {
//         eat(); // Calling the base class method proteted ba ng
//          }
// };

// int main() {
//     Dog d1(5, 20); // Initializing Dog with age and weight
//     d1.print(); // This will print the age of the Dog
//     d1.eat(); // This will call the eat method
//     return 0;
// }




// ////////////////////////////////////////////**********************************************
#include <iostream>
using namespace std;



 Reusability is yet another important
 feature ofOOP. Itis always nice ifwecould
 reuse something that alreadyexists rather
 Lb a[j 
trying La create the same .ill over
 again. It would not only save time and
 money but also reduce frustration and
 increase reliability. Forinstance, the reuse
 of a class that has already been tested,
 debugged and used many times can save
 us the effort ofdeveloping and testing the
 same again.
 Fortunately, C++ strongly supports the
 concept ofreusability. The C++ classes can
 be reused in several ways. Once a class has
 been written and tested, it can be adapted
 by other programmers to suit their
 requirements. This is basically done by
 c re>; l1 i 
ng new cla sees, 
re< i
 gj
 ng the |
 mo]jertii sa
 of the existing ones. The mechanism of
 deriving a new class from an old one is
 called inheritance for derivation). The old
 class is referred to as the base class and
 the new one is called the derived class or
 subclass.
 Copyrighted material
202*
 Object-Oriented Programming
 C++
 The derived class inherits some or all ofthe traits from the base class. A class can also
 inherit properties from mure than one class or from more than one level. A derived class
 with only one base class, is called single inheritance and one with several base classes is
 called multiple inheritance, On the other hand, the traits ofone class may be inherited by
 more than one class. This process is known as hierarchical inheritance. The mechanism of
 deriving a class from another 'derived class1 is known as multilevel inheritance. Figure 8.1
 ghowa various firmly ofinheritance that could be osed For writing extensible program^, The
 direction ofarrow indicates the direction ofinheritance, (Some authors show the arrow in
 opposite direction meaning "inherited from

// Base class (Parent)
class Human {

    This code demonstrates a simple example of inheritance in C++. We have a base class called Human that represents a person with common attributes like name and age. We then have two derived classes, Student and Teacher, that inherit from the Human class and add their own specific attributes.
protected:
    string name;
    int age;

public:
    // Constructor to initialize common attributes
    Human(string n, int a) : name(n), age(a) {}

    void displayInfo() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

// Derived class for Student (Child 1)
class Student : public Human {
    he Student class has an additional private member variable, studentID, which is initialized through its constructor. It also has a public method called showInfo() that calls the displayInfo() method of the Human class to print out the name and age, and then prints out the student ID.
private:
    int studentID;

public:
    // Constructor to initialize Student-specific and Human attributes
    Student(string n, int a, int id) : Human(n, a), studentID(id) {}

    void showInfo() {
        displayInfo(); // Calling the base class method
        cout << "Student ID: " << studentID << endl;
    }
};

// Derived class for Teacher (Child 2)
class Teacher : public Human {
    imilarly, the Teacher class has an additional private member variable, subject, which is initialized through its constructor. It also has a public method called showInfo() that calls the displayInfo() method of the Human class to print out the name and age, and then prints out the subject.
private:
    string subject;

public:
    // Constructor to initialize Teacher-specific and Human attributes
    Teacher(string n, int a, string sub) : Human(n, a), subject(sub) {}

    void showInfo() {
        displayInfo(); // Calling the base class method
        cout << "Subject: " << subject << endl;
   }
};

int main() {
    // Creating a Student object
    Student s("Alice", 20, 101);
    cout << "Student Information:" << endl;
    s.showInfo();

    // Creating a Teacher object
    Teacher t("Mr. John", 45, "Mathematics");
    cout << "\nTeacher Information:" << endl;
    t.showInfo();

    return 0;
}
 */










// #include <iostream>
// using namespace std;

// // Base class
// class Vehicle {
// public:
//     Vehicle() {
//         cout << "This is a Vehicle" << endl;
//     }
// };

// // Derived class
// class Car : public Vehicle {
// public:
//     Car() {
//         cout << "This Vehicle is a Car" << endl;
//     }
// };

// int main() {
//     Car obj; // Creating an object of Car
//     return 0;
// }


// Object Creation: When you create an object obj of the Car class, the constructor of the Vehicle class is invoked first because Car is derived from Vehicle.

// Constructor Calls:

// The Vehicle constructor prints "This is a Vehicle".
// After that, the Car constructor executes and prints "This Vehicle is a Car".
// Clarification on Object Creation