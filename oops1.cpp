#include<iostream>
using namespace std;
// how we can store his heap memory allocation dynamic memmory allocation 
// int* left  = new int[len1];
// int* a = 5;
class Animal{
  // int age ;
  //int takes 4 byte 
  // int weight;
  // char ch;
  //Question to search padding adn greedy alignment in cpp
  //state and poperty
  private :
  int   weight;
  public:
  int age  = 12;
  
  string type;
  Animal(){
    this->weight = 0;
    this->age = 0;
    this->type = "";
    cout<<"constructor"<<endl;

}
Animal(int age){
  this->age = age;
  cout<<"this parameterized constructor"<<endl;
}
Animal(int age,int weight){
  this->age = age;
  this->weight = weight;
}
// copy constructor
Animal(Animal &obj){
  // by regfence karte copy ni banta 
  
  this->age = obj.age;
  this->weight = obj.weight;
  this->type = obj.type;
  cout<<"hello"<<endl;
}

  void eat(){
    cout<<"eating "<<endl;

  }

  //define behavoir
  void sleep(){
    cout<<"sleeping"<<endl;
  }
  int getWeight(){
    return weight;
  }
  void setWeight(int w){
    weight = w;
  }

};
int main(){
  // Animal* surresh = new Animal;
  // (*surresh).age = 13;
  Animal a(10);
  Animal*  b =    new Animal(123,56);

  Animal c = a;// copy
  Animal d(b);//obj copy
  return 0;

}

