// https://practice.geeksforgeeks.org/problems/count-distinct-elements-in-every-window/1

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;



// } Driver Code Ends

class Solution{
  public:
    vector <int> countDistinct (int A[], int n, int k)
    {
        map<int , int> m;
        for(int i=0;i<k;i++){
            m[A[i]]++;
        }
        vector<int> v;
        v.push_back(m.size());
        int x=0;
        for(int i=k;i<n;i++){
            if(m[A[x]] > 1){
                m[A[x]]--;
            }
            else m.erase(A[x]);
            x++;
            m[A[i]]++;
            v.push_back(m.size());
        }
        return v;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int n, k;
        cin >> n >> k;
        int a[n];
        for (int i = 0; i < n; i++) 
        	cin >> a[i];
        Solution obj;
        vector <int> result = obj.countDistinct(a, n, k);
        for (int i : result) 
        	cout << i << " ";
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends