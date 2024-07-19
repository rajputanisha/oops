#include<iostream>
using namespace std;
class abc
{
  public:
  static  int x,y;
  void print() const
  {
    cout<<x<<endl;
    cout<<y<<endl;
  }
};
int abc::x;
int abc::y;
int main(){
  abc obj1;
  obj1.x = 23;
  obj1.y = 3;
  obj1.print();
  
/** */
 abc obj2;
  obj2.x = 23;
  obj2.y = 3;
  obj2.print();

return 0;

}