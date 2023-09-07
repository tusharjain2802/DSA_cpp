//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    int findSubString(string str)
    {
        int count =0;
        int ans = INT_MAX;
        set<char> st;
        unordered_map<char, int> m1;
        for (int i=0;i<str.length();i++){
            st.insert(str[i]);
        }
        int n = st.size();
        int i=0, j=1;
        m1[str[i]]++;
        while(i<=j && j<str.length()){
            if(count<n){
                if(m1[str[j]]==0) count++;
                m1[str[j]]++;
                j++;
            }
            else if(count ==n){
                ans = min(ans, j-i);
                if(m1[str[i]]==1) {
                    count--;
                }
                m1[str[i]]--;
                i++;
            }
        }
        while(count==n){
            ans = min(ans, j-i);
            if(m1[str[i]] ==1) count--;
            m1[str[i]]--;
            i++;
        }
        return ans;
    }
};

//{ Driver Code Starts.
// Driver code
int main() {
    int t;
    cin >> t;
    while (t--) {

        string str;
        cin >> str;
        Solution ob;
        cout << ob.findSubString(str) << endl;
    }
    return 0;
}
// } Driver Code Ends