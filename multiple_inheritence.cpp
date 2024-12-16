#include<iostream>
using namespace std;

class tiger{
  public:
  int phy;
  tiger() : phy(0) {} // constructor to initialize phy
};

class lion : public tiger{
  public:
  int chem;
  lion() : chem(0) {} // constructor to initialize chem
};

class linger : public lion{ // removed multiple inheritance
  public:
  int maths;
  linger() : maths(0) {} // constructor to initialize maths
};

int main(){
  linger obj;
  cout << "Phy: " << obj.phy << ", Chem: " << obj.chem << ", Maths: " << obj.maths << endl;
  return 0;
}
#include <iostream>
using namespace std;

// Grandparent class
class GrandParent {
public:
    void method1() {
        cout << "GrandParent method1" << endl;
    }
};

// Parent class inheriting from GrandParent
class Parent : public GrandParent {
public:
    void method2() {
        cout << "Parent method2" << endl;
    }
};

// Child class inheriting from Parent
class Child : public Parent {
public:
    void method3() {
        cout << "Child method3" << endl;
    }
};

int main() {
    Child child;
    child.method1();  // Output: GrandParent method1
    child.method2();  // Output: Parent method2
    child.method3();  // Output: Child method3
    
    return 0;
}