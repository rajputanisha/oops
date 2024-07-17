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