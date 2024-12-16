#include<bits/stdc++.h>
using namespace std;
int main(){
  int n = 4;
  int arr[n] = {2,4,-1,-2};
   vector<int>neg;
   vector<int>pos;
   for(int i = 0;i<n;i++){
    if(arr[i]<0) {
      neg.push_back(arr[i]);
    }else{
      pos.push_back(arr[i]);
    }
   }
   for(int i = 0;i<n/2;i++){
    arr[2*i] = pos[i];
    arr[2*i+1] = neg[i];
   }
   for(auto it :arr){
    cout<<it<<" ";
   }
  return 0;
}