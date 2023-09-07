// https://practice.geeksforgeeks.org/problems/partitions-with-given-difference/1

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
    public:
    int mod = (int)(1e9+7);
    int solve(vector<int>& arr, int n, int target, vector<vector<int>> &dp){
        if(n==0){
            if(target==0 && arr[0]==0) return 2;
            if(target==0 || target == arr[0]) return 1;
            return 0;
        }
        if(dp[n][target] != -1) return dp[n][target];
        int notTake = solve(arr, n-1, target, dp);
        int take = 0;
        if(arr[n] <= target) take = solve(arr, n-1, target - arr[n], dp);
        
        return dp[n][target] = (notTake + take)%mod;
    }
    int countPartitions(int n, int d, vector<int>& arr) {
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=arr[i];
        }
        if((sum-d)<0 || (sum-d)%2==1) return 0;
        sum = (sum-d)/2;
        vector<vector<int>> dp(n, vector<int>(sum+1, -1));
        return solve(arr, n-1, sum, dp);
    }
   
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, d;
        cin >> n >> d;
        vector<int> arr;

        for (int i = 0; i < n; ++i) {
            int x;
            cin >> x;
            arr.push_back(x);
        }

        Solution obj;
        cout << obj.countPartitions(n, d, arr) << "\n";
    }
    return 0;
}
// } Driver Code Ends