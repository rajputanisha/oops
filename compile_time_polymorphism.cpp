#include<iostream>
using namespace std;
class Maths{
public :
int sum(int a,int b){
  return a+b;
}
int sum(int a,int b,int c){
  return a+b+c;
}


};

int main(){
  Maths m;
  cout<<m.sum(1,2)<<endl;
  return 0;
}