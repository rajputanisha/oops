#include<iostream>
using namespace std;
class Animal{
  private:
  int age;
  int weight;
  // data member 
  //memeber function
  
  // we want to achieve encasulation
  public:
  void eat(){
    cout<<"Eating"<<endl;

  }
  int getAge(){
    return  this->age;
  }
  void setAge(int age){
    this->age = age;
  }
};
int main(){

}