// https://practice.geeksforgeeks.org/problems/kth-largest-element-in-a-stream2220/1

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends



class Solution {
  public:
    vector<int> kthLargest(int k, int arr[], int n) {
   
     priority_queue<int, vector<int>, greater<int>> pq;
        vector<int> v;
     
       for(int i=0;i<n;i++){
           
           pq.push(arr[i]);
           if(pq.size()<k){
               v.push_back(-1);continue;
           }
           else if(pq.size()==k){
                v.push_back(pq.top());
               //pq.push(arr[i]);
               //pq.pop();
           }
           else {
               pq.pop();
               v.push_back(pq.top());
           }
           
           
       }
       
       
        return v;
    }
};
/*
class Solution {
  public:
    vector<int> kthLargest(int k, int arr[], int n) {
    //     priority_queue<int, vector<int>, greater<int>> pq;
    //     vector<int> v;
      
       
    //   for(int i=0;i<n;i++){
           
    //       pq.push(arr[i]);
    //       if(pq.size()<k){
    //           v.push_back(-1);continue;
    //       }
    //       else if(pq.size()==k){
    //             v.push_back(pq.top());
              
    //       }
    //       else {
    //           pq.pop();
    //           v.push_back(pq.top());
    //       }
           
           
    // }
       
       
    //     return v;
     priority_queue<int, vector<int>, greater<int>> pq;
       vector<int> v;
    for(int i=0;i<n;i++){
           
           pq.push(arr[i]);
           if(pq.size()<k){
               v.push_back(-1);continue;
           }
           else if(pq.size()==k){
                v.push_back(pq.top());
               //pq.push(arr[i]);
               //pq.pop();
           }
           else {
               pq.pop();
               v.push_back(pq.top());
           }
           
           
       }
       
       
        return v;
    }
};

*/

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int k,n;
        cin>>k>>n;
        int arr[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];

        Solution ob;
        vector<int> v = ob.kthLargest(k,arr,n);
        for(int i : v)
            cout<<i<<" ";
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends