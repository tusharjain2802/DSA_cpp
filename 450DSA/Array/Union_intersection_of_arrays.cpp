//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template in C++

class Solution{
    public:
    //Function to return the count of number of elements in union of two arrays.
    int doUnion(int a[], int n, int b[], int m)  {
     // for(int i=0;)
       
       
        vector<int> v1;
        sort(a, a + n);
        sort(b, b + m);
        int n1=0,n2=0;
        for(int i=0;i<n+m;i++){
            if(a[n1]<b[n2]){
                v1.push_back(a[n1]);
                n1++;
            }
            else if(a[n1]== b[n2]){
                v1.push_back(a[n1]);
                n1++;
                n2++;
            }
            else{
                v1.push_back(b[n2]);
                n2++;
            }
            if(n1==n || n2 == m){
                break;
            }
        }
        while(n1<n || n2<m){
            if(n1<n){
                v1.push_back(a[n1]);
                n1++;
            }
            else{
                v1.push_back(b[n2]);
                n2++;
            }
        }
        vector<int> V;
        V.push_back(v1[0]);
        for(int i=1;i<v1.size();i++){
            if(v1[i]!=v1[i-1]){
                V.push_back(v1[i]);
            }
        }
        
        
        return V.size();
    }   
};

//{ Driver Code Starts.

int main() {
	
	int t;
	cin >> t;
	
	while(t--){
	    
	    int n, m;
	    cin >> n >> m;
	    int a[n], b[m];
	   
	    for(int i = 0;i<n;i++)
	       cin >> a[i];
	       
	    for(int i = 0;i<m;i++)
	       cin >> b[i];
	    Solution ob;
	    cout <<"Size of Union Array is: " <<ob.doUnion(a, n, b, m) << endl;
	    
	}
	
	return 0;
}
// } Driver Code Ends