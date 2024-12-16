#include<iostream>
using namespace std;
int x =3;
int main(){
  int x = 45;
 cout<<::x<<endl;
//  global variable is a variable that has a global scope, meaning it can be accessed and modified from any part of the program.
  //we cna also change global ;ike this ::x=45;
  //   int x = 34;
  //   cout<<x;
  //    x = 45;
   cout<<::x;
  
  return 0;
}
//prefernce mst is to local variable
// :: accessing global __cpp_variable_templates
When a global variable and a local variable share the same name, accessing the local variable may accendciatently
 lead to the global variable being accessed instead.