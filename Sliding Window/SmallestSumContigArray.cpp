// https://practice.geeksforgeeks.org/problems/smallest-sum-contiguous-subarray/1

//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
  public:
  int smallestSumSubarray(vector<int>& a){
      int ans =INT_MAX;
      int min=0;
      for(int i=0;i<a.size();i++){
          if(min>0) min = a[i];
          else{
              min+=a[i];
          }
          if(ans>min) ans=min;
      }
      return ans;
  }
};


//{ Driver Code Starts.



int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        
        Solution ob;
        
        int ans = ob.smallestSumSubarray(a);
        
        cout<<ans<<endl;
    }
}
// } Driver Code Ends