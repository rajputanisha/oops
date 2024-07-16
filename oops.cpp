#include<iostream>
using namespace std;

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
  ;
  string name = "Anisha";
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
   // obj creation

   //static allocation 
   // dynamic allocation
   Animal ani;
   cout<<ani.age<<endl;
   cout<<ani.name<<endl;
   ani.eat();
   ani.sleep();
   ani.setWeight(101);
cout<<ani.getWeight()<<endl;
  cout<<"size of empty class"<<sizeof(Animal)<<endl;
  return 0;
}
//minimum possible space has been given so that it shows  class is exists