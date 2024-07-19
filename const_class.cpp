#include<iostream>
using namespace std;
class abc{
  int x;
  int *y;
  public:
  abc(){
    x =10;
    y = new int(12);
  }
  int getX(){
return x;
  }
  void set(int _val){
    x = _val;
  }
  /** */
  int getY(){
return *Y;
  }
  void set(int _val){
    *y = _val;
  }

};
voidprint(const abc &a){
  cout<<a.getX()<<endl;
}
int main(){
  return 0;
}