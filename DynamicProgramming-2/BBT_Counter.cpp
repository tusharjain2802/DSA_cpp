// https://practice.geeksforgeeks.org/problems/bbt-counter4914/1

//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
  int mod=(int)1e9+7;
  long long  int helper(int h,vector<long long int>&dp){
      if(h<0) return 0;
      if(h==0||h==1) return 1;
      if(dp[h]!=-1) return dp[h];
      long long int a=helper(h-1,dp);
      long long int b=helper(h-2,dp);
      return dp[h]=(2*a*b+a*a)%mod;
  }
    long long int countBT(int h) { 
    vector<long long int>dp(h+1,-1);
       return helper(h,dp);
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int h;
        cin >> h;
        Solution ob;
        cout<<ob.countBT(h)<<endl;  
    }
    return 0;
}

// } Driver Code Ends