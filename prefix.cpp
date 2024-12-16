#include<bits/stdc++.h>
using namespace std;

int fun(int arr[], int n, int k) {
    int cnt = 0;
    int sum = 0;
    unordered_map<int, int> mp;
    mp[0] = 1; // We initialize this to 1 to handle the case when sum itself equals k.

    for (int i = 0; i < n; i++) {
        sum += arr[i];

        // Check if sum - k exists in the map, if so, we have found a valid subarray
        if (mp.find(sum - k) != mp.end()) {
            cnt += mp[sum - k];  // Increment by the number of times sum - k occurred
        }

        // Update the map to include the current sum
        mp[sum]++;
    }

    return cnt;
}

int main() {
    int n = 6;
    int arr[] = {1, 2, 3, 4, 2, -1};
    int k = 6;
    int ans = fun(arr, n, k);
    cout << ans << endl; // This should now give the correct result
    return 0;
}
