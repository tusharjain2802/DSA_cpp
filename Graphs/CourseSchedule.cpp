// https://practice.geeksforgeeks.org/problems/prerequisite-tasks/1
// https://leetcode.com/problems/course-schedule/

//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
    bool dfs(int node, vector<int> adj[], vector<int> &vis, vector<int> &Pathvis){
        vis[node]=1;
        Pathvis[node]=1;
        for(auto i:adj[node]){
            if(vis[i] ==0) {
                if(dfs(i, adj, vis, Pathvis) == true) return true;
            }
            else if(Pathvis[i] ==1) return true;
        }
        Pathvis[node] =0;
        return false;
    }
	bool isPossible(int N,int P, vector<pair<int, int> >& prerequisites) {
	    vector<int> adj[N];
	    for(int i=0;i<P;i++){
	        adj[prerequisites[i].second].push_back(prerequisites[i].first);
	    }
	    vector<int> vis(N, 0);
	    vector<int> Pathvis(N, 0);
	    for(int i=0;i<N;i++){
	        if(vis[i] ==0) {
	            if(dfs(i, adj, vis, Pathvis)==true) return false;
	        }
	    }
	    return true;
	}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
    	int N, P;
        vector<pair<int, int> > prerequisites;
        cin >> N;
        cin >> P;
        for (int i = 0; i < P; ++i) {
            int x, y;
            cin >> x >> y;
            prerequisites.push_back(make_pair(x, y));
        }
        // string s;
        // cin>>s;
        Solution ob;
        if (ob.isPossible(N,P, prerequisites))
            cout << "Yes";
        else
            cout << "No";
        cout << endl;
	}
	return 0;
}
// } Driver Code Ends