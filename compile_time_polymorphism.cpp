#include<iostream>
using namespace std;
class Maths{
public :
int sum(int a,int b){
  return a+b;
}
int sum(int a,int b,int c){
  return a+b+c;
}


};

int main(){
  Maths m;
  cout<<m.sum(1,2)<<endl;
  return 0;
}
#include <iostream>
using namespace std;

class Math {
public:
    // Overloaded function for integers
    int add(int a, int b) {
        return a + b;
    }

    // Overloaded function for doubles
    double add(double a, double b) {
        return a + b;
    }

    // Overloaded function for three integers
    int add(int a, int b, int c) {
        return a + b + c;
    }
};

int main() {
    Math math;
    cout << "Addition of two integers: " << math.add(5, 10) << endl; // Calls int version
    cout << "Addition of two doubles: " << math.add(5.5, 10.5) << endl; // Calls double version
    cout << "Addition of three integers: " << math.add(5, 10, 15) << endl; // Calls three int version

    return 0;
}