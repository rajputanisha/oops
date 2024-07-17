#include<iostream>
using namespace std;
class Car{
public:
int age;
int weihgt;
string name;
void speedUp(){
cout<<"speed up"<<endl;
}
};
class Scorpio : public Car{

};
class Fortuner: public Car{

};
int main(){
  Scorpio s;
  s.speedUp();
  Fortuner f;
  f.speedUp();
  
  return 0;
}