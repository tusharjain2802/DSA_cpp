// https://practice.geeksforgeeks.org/problems/subset-sum-problem2014/1

//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int solve(int index, int arr[], int n, int target, vector<vector<int>> &dp){
        if(index>=n) return 0;
        if(target <0) return 0;
        if(target == 0) return 1;
        if(dp[index][target] != -1) return dp[index][target];
        int incl = solve(index+1, arr, n, target - arr[index], dp);
        int excl = solve(index+1, arr, n, target, dp);
        
        return dp[index][target] = incl || excl;
    }
    int equalPartition(int n, int arr[])
    {
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=arr[i];
        }
        if(sum%2 != 0){
            return 0;
        }
        else{
            sum = sum/2;
        }
        vector<vector<int>> dp(n, vector<int>(sum+1, -1));
        return solve(0,arr, n, sum, dp);
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        int arr[N];
        for(int i = 0;i < N;i++)
            cin>>arr[i];
        
        Solution ob;
        if(ob.equalPartition(N, arr))
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}
// } Driver Code Ends