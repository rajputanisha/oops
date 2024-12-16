#include <bits/stdc++.h>
using namespace std;

string fun(int arr[], int n, int target) {
         // Return {-1, -1} if no pair is found
      int l = 0;
      int r = n-1;
      sort(arr,arr+n);
      while(l<r){
           int sum = arr[l]+
      }




}

int main() {
    int arr[] = {4, 6, 2, 7, 4, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 9;

     string ans = fun(arr,n,target);
     cout<<ans;

    return 0;
}
