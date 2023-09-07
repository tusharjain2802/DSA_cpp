//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to find the next greater element for each element of the array.
    vector<long long> nextLargerElement(vector<long long> arr, int n){
        vector<long long> vc;
        stack<long long> st;
        int num=-1;
        for(int i=n-1; i>=0;i--){
            
            if(st.empty()){
                vc.push_back(num);
                st.push(arr[i]);
            }
            else{
                if(arr[i] < st.top()){
                    vc.push_back(st.top());
                    st.push(arr[i]);
                }
                else{
                    st.pop();
                    i++;
                }
            }
        }
        for(int i=0;i<n/2;i++){
            swap(vc[i], vc[n-i-1]);
        }
        return vc;
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
        vector<long long> arr(n);
        for(int i=0;i<n;i++)
            cin>>arr[i];
        
        Solution obj;
        vector <long long> res = obj.nextLargerElement(arr, n);
        for (long long i : res) cout << i << " ";
        cout<<endl;
    }
	return 0;
}
// } Driver Code Ends