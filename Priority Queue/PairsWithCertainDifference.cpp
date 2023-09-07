// https://practice.geeksforgeeks.org/problems/pairs-with-specific-difference1533/1 

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    int maxSumPairWithDifferenceLessThanK(int arr[], int N, int K)
    {
        priority_queue<int>  pq;
        for(int i=0;i<N;i++){
            pq.push(arr[i]);
        }
        int ans=0;
        while(!pq.empty()){
            int p1 = pq.top();
            pq.pop();
            if(!pq.empty()){
                int p2=pq.top();
                
                if(abs(p1-p2) < K){ 
                    //cout<<p1<<" "<<p2<<" ,";
                    ans +=(p1+p2);
                    pq.pop();
                }
                else continue;
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
	int t;
	cin>>t;
	while(t--)
	{
		int N;
		cin>>N;
		int arr[N];
		for(int i=0;i<N;i++)
		cin>>arr[i];

		int K;
		cin>>K;
        Solution ob;
		cout<<ob.maxSumPairWithDifferenceLessThanK(arr,N,K)<<endl;
	}
	return 0;
}

// } Driver Code Ends