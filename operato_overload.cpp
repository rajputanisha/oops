#include<iostream>
using namespace std;
class Param{
  public:
  int val;
  void operator+(Param obj2){
    
    int val1 = this->val;
    int val2 = this->val;
    cout<<(val2-val1)<<endl;

  }
};
int main(){
  Param p1;
  Param p2;
  p1.val = 3;
  p2.val= 4;
  //this should priit the diffence the between thwn
  p1+p2;

}