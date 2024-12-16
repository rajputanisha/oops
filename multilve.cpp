#include <iostream>
using namespace std;

// Base class 1
class Base1 {
public:
    void method1() {
        cout << "Base1 method1" << endl;
    }
};

// Base class 2
class Base2 {
public:
    void method2() {
        cout << "Base2 method2" << endl;
    }
};

// Derived class inheriting from both Base1 and Base2
class Derived : public Base1, public Base2 {
public:
    void method3() {
        cout << "Derived method3" << endl;
    }
};

int main() {
    Derived obj;
    obj.method1();  // Output: Base1 method1
    obj.method2();  // Output: Base2 method2
    obj.method3();  // Output: Derived method3

    return 0;
    multileval inheritamnce
}