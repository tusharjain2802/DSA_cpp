// https://practice.geeksforgeeks.org/problems/largest-subarray-with-0-sum/1

//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
/*You are required to complete this function*/

class Solution{
    public:
    int maxLen(vector<int>&arr, int n)
    {   
        unordered_map<int, int> m;
        m[0]=-1;
        int sum=0;
        int max = INT_MIN;
        int temp;
        for(int i=0;i<n;i++){
            sum+=arr[i];
            if(m.find(sum) != m.end()){
                temp = i-m[sum];
                if(temp>max){
                    max = temp;
                }
            }
            else m[sum] = i;
        }
        if(max != INT_MIN) return max;
        else return 0;
    }
};


//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int m;
        cin>>m;
        vector<int> array1(m);
        for (int i = 0; i < m; ++i){
            cin>>array1[i];
        }
        Solution ob;
        cout<<ob.maxLen(array1,m)<<endl;
    }
    return 0; 
}



// } Driver Code Ends