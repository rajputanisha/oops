//overriding in rutime 
/*
need of overrridng Overriding allows derived classes to provide their own specific implementation of a method that is defined in a base class. This is useful when different subclasses need to perform a similar action in a way that is specific to their type./*
//inherit class containe some propertiees but i want ot change accoding to myself ..custom behavoir 
//overriding is a process of changing the behaviour of the parent class in child class
// for instance class contain speek and the child class has does not sppourt the peorperty speak they want ot add customly instrad of speak they eant bark memeber function .with help of function overrriding the y can change mannnula ..
//  this is the benfits of function oveririding
#include<iostream>  
using namespace std;
class Animal{
  public:
  virtual void  speak(){
    cout<<"speak"<<endl;
  }
};
class Dog:public Animal{
  public:
  // now i am goinf to iveride the function
  void speak(){
    cout<<"dogs barking"<<endl;
  }
};
int main(){
  // Animal a;
  // a.speak();
// Animal *a = new Animal();
//    a->speak();
  // Dog d;
  // d.speak();
  // Dog *d = new Dog();
  // d->speak();
  Animal* a = new Dog();
  //this is the cofucion decide on runtime 
  //how barking will print
  //upcasting Animal* a = new Dog(); .when we call function pponter parent and actual ibj ischild class
  //is case me ihamse parent class ka call hota hai
// what is downcasting 
//downcasting is a process of converting the parent class pointer to child class pointer
// a->speak();
// Dog *d = dynamic_cast<Dog*>(a);
// d->speak();
// / pointer ka method call ho rha haga 
//if we applly virtual jiska obj banya h uska func call hogga

  a->speak();

  return 0;
}