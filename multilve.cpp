#include<iostream>
using namespace std;
class Fruit{
public:
string name;

};
class Mango: public Fruit{
   public:
   int weight;
};
class Anana: public Mango{
 public:
 int sugarLevel;
};
int main(){
  Anana a;
  cout<<a.weight<<" "<<a.sugarLevel<<" "<<endl;
  return  0;
}