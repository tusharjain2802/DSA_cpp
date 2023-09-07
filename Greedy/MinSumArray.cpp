// https://practice.geeksforgeeks.org/problems/min-sum-formed-by-digits3551/1

//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    long long int minSum(int arr[], int n)
    {
        priority_queue<int, vector<int>, greater<int>> pq;
        for(int i=0;i<n;i++){
            pq.push(arr[i]);
        }
        long long n1=0, n2=0;
        while(!pq.empty()){
            if(!pq.empty()){
                n1 = (n1*10);
                n1+= pq.top();
                pq.pop();
            }      
            if(!pq.empty()){
                n2 = (n2*10);
                n2+=pq.top();
                pq.pop();
            }
        }
        return n1+n2;
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
        cin>>n;
        int arr[n+1];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        Solution ob;
        cout<<ob.minSum(arr, n)<<endl;
    }
    return 0;
}

// } Driver Code Ends