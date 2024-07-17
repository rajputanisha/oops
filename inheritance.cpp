#include<iostream>
using namespace std;

class Animal{
  // private:
  // public :
  protected:
  int age;
  int weight;
  // public:
  void eat(){
    cout<<"eating"<<endl;
  }
};
class Dog :private Animal{
    public:
     void print(){
      cout<<this->age;
    }
};
int main(){
  Dog d1;
  // d1.age;
  d1.print();
  // cout<<d1.age; age is not accessbile
  // cout<<d1.age<<endl;
  // d1.eat();
  return 0;
}