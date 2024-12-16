

// ////////////////////////////////////////////**********************************************
// #include <iostream>
// using namespace std;

// // Base class (Parent)
// class Human {
// protected:
//     string name;
//     int age;

// public:
//     // Constructor to initialize common attributes
//     Human(string n, int a) : name(n), age(a) {}

//     void displayInfo() {
//         cout << "Name: " << name << ", Age: " << age << endl;
//     }
// };

// // Derived class for Student (Child 1)
// class Student : public Human {
// private:
//     int studentID;

// public:
//     // Constructor to initialize Student-specific and Human attributes
//     Student(string n, int a, int id) : Human(n, a), studentID(id) {}

//     void showInfo() {
//         displayInfo(); // Calling the base class method
//         cout << "Student ID: " << studentID << endl;
//     }
// };

// // Derived class for Teacher (Child 2)
// class Teacher : public Human {
// private:
//     string subject;

// public:
//     // Constructor to initialize Teacher-specific and Human attributes
//     Teacher(string n, int a, string sub) : Human(n, a), subject(sub) {}

//     void showInfo() {
//         displayInfo(); // Calling the base class method
//         cout << "Subject: " << subject << endl;
//     }
// };

// int main() {
//     // Creating a Student object
//     Student s("Alice", 20, 101);
//     cout << "Student Information:" << endl;
//     s.showInfo();

//     // Creating a Teacher object
//     Teacher t("Mr. John", 45, "Mathematics");
//     cout << "\nTeacher Information:" << endl;
//     t.showInfo();

//     return 0;
// }
//  */










// // #include <iostream>
// // using namespace std;

// // // Base class
// // class Vehicle {
// // public:
// //     Vehicle() {
// //         cout << "This is a Vehicle" << endl;
// //     }
// // };

// // // Derived class
// // class Car : public Vehicle {
// // public:
// //     Car() {
// //         cout << "This Vehicle is a Car" << endl;
// //     }
// // };

// // int main() {
// //     Car obj; // Creating an object of Car
// //     return 0;
// // }


// // Object Creation: When you create an object obj of the Car class, the constructor of the Vehicle class is invoked first because Car is derived from Vehicle.

// // Constructor Calls:

// // The Vehicle constructor prints "This is a Vehicle".
// // After that, the Car constructor executes and prints "This Vehicle is a Car".
// // Clarification on Object Creation