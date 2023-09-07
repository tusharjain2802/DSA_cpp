// https://practice.geeksforgeeks.org/problems/power-set4302/1

//Subsequences are just unique subsets.

//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	public:
	    void solve(string s, string output, vector<string> &ans, int index){
	        if(index>=s.size()){
	            if(output.size()>0)
	            ans.push_back(output);
	            return;
	        }
	        solve(s, output, ans, index+1);
	        output+=s[index];
	        solve(s, output, ans, index+1);
	        return;
	    }
		vector<string> AllPossibleStrings(string s){
		   string output;
		   vector<string> ans;
		   solve(s, output, ans, 0);
		   sort(ans.begin(), ans.end());
		   return ans;
		}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string s;
		cin >> s;
		Solution ob;
		vector<string> res = ob.AllPossibleStrings(s);
		for(auto i : res)
			cout << i <<" ";
		cout << "\n";

	}
	return 0;
}
// } Driver Code Ends