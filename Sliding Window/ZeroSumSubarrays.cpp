// https://practice.geeksforgeeks.org/problems/zero-sum-subarrays1825/1

//{ Driver Code Starts
//Initial function template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution{
public:
    //Function to count subarrays with sum equal to 0.
    long long int findSubarray(vector<long long int> &arr, int n ) {
        unordered_map<int, int> m;
        m[0]=1;
        int sum =0, maxi=0;
        for(int i=0;i<n;i++){
            sum+=arr[i];
            if(m.find(sum) != m.end()){
                maxi += m[sum];
            }
            m[sum]++;
        }
        return maxi;
    }
};

//{ Driver Code Starts.
int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n; //input size of array
       
        vector<long long int> arr(n,0);
        
        for(int i=0;i<n;i++)
            cin>>arr[i]; //input array elements
        Solution ob;
        cout << ob.findSubarray(arr,n) << "\n";
    }
	return 0;
}
// } Driver Code Ends