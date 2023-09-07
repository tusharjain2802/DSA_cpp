// https://practice.geeksforgeeks.org/problems/minimum-cost-of-ropes-1587115620/1

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to return the minimum cost of connecting the ropes.
    long long minCost(long long arr[], long long n) {
        priority_queue<long long, vector<long long>, greater<long long>> pq;
        for(long long i=0;i<n;i++){
            pq.push(arr[i]);
        }
        long long sum=0;
        long long r1, r2;
        while(pq.size() > 1){
            r1=pq.top();
            pq.pop();
            r2 = pq.top();
            pq.pop();
            pq.push(r1+r2);
            sum+=(r1+r2);
        }
        return sum;
    }
};


//{ Driver Code Starts.

int main() {
    long long t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        long long i, a[n];
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        cout << ob.minCost(a, n) << endl;
    }
    return 0;
}

// } Driver Code Ends