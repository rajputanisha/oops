#include<iostream>
using namespace std;
class Car{
  public:
  string name;
  int weight;
  int age ;
  void speedUp(){
    cout<<"speed up guys"<<endl;

  }
  void breakMarro(){
cout<<"break marr be"<<endl;
  }

};
class scopio : public Car{

};

int main(){
  scopio s;
  s.speedUp();
  return 0;
}