#include<iostream>
using namespace std;
int x =3;
int main(){
  int x = 45;
  cout<<::x;
  //we cna also change global ;ike this ::x=45;
    int x = 34;
    cout<<x;
     x = 45;
  cout<<::x;
  
  return 0;
}
//prefernce mst is to local variable
// :: accessing global __cpp_variable_templates