// https://practice.geeksforgeeks.org/problems/longest-subarray-with-sum-divisible-by-k1259/1

//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	int longSubarrWthSumDivByK(int arr[], int n, int k)
	{
	    int max = 0;
        int curr = 0;
	    unordered_map<int, int> m;
	    for(int i=0;i<n;i++){
	        curr += arr[i];
            int mod = ((curr%k)+k)%k;
            if(mod ==0) max=i+1;
            else if( m.find(mod) == m.end()){
                m[mod] = i;
            }
            else{
                if(max < (i - m[mod])){
                    max = i -m[mod] ;
                }
            }
	    }
	    return max;
	}
};

//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	int n,k,i;
	cin>>n>>k; int arr[n];
	for(i=0;i<n;i++)
	cin>>arr[i];
	Solution ob;
	cout<<ob.longSubarrWthSumDivByK(arr, n, k)<<"\n";
	}
	return 0;	 
}

// } Driver Code Ends