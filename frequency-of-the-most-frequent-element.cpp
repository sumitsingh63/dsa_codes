#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int maxFrequency(int nums[], int n, int k) {
        long long sum=0,ans=0;
        sort(nums,nums+n);
        long long left,right;
        left=0;
        right=0;
        for(right=0;right<n;right++)
        {
            sum+=nums[right];
            if((right-left+1)*nums[right]-sum>k)
            {
                sum-=nums[left];
                left++;
            }
            ans=max(ans,right-left+1);
        }
        return ans;
    }
};


int main() {
    int t;
    cin >> t; // testcases
    while (t--) {
        int n, k;
        cin >> n >> k; // total size of array and integer k

        int arr[n];

        // inserting elements in the array
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution obj;
        // calling maxFrquency() function
        int ans = obj.maxFrequency(arr, n, k);

        cout << ans << endl;
    }
}
