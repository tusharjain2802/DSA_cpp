
#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    // arr: input array
    // n: size of array
    //Function to find the sum of contiguous subarray with maximum sum.
    long long maxSubarraySum(int arr[], int n){
        long long maxSum =0;
        long long curSum =0;
        
        for (int i=0;i<n;i++){
            curSum += arr[i];
            if (maxSum <curSum){
                maxSum = curSum;
            }
            if(curSum<0){
                curSum = 0;
            }
        }
        if (maxSum ==0){
            return *max_element(arr, arr + n);
        }
        else{
        return maxSum;
        }
    }
};

//{ Driver Code Starts.

int main()
{
    int t,n;
    
    cin>>t; 
    while(t--) 
    {
        
        cin>>n; 
        
        int a[n];
        
        for(int i=0;i<n;i++)
            cin>>a[i]; 
            
        Solution ob;
        
        cout << ob.maxSubarraySum(a, n) << endl;
    }
}