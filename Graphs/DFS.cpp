// https://practice.geeksforgeeks.org/problems/depth-first-traversal-for-a-graph/1

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    void dfsg(vector<int> adj[], int node, vector<int> &dfs, int vis[]){
        vis[node]=1;
        dfs.push_back(node);
        for(auto it:adj[node]){
            if(vis[it] ==0){
                dfsg(adj, it, dfs, vis);
            }
        }
    }
    vector<int> dfsOfGraph(int V, vector<int> adj[]) {
        int start =0;
        int visited[V]={0};
        vector<int> dfs;
        dfsg(adj, start, dfs, visited);
        return dfs;
    }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >> E;

        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        // string s1;
        // cin>>s1;
        Solution obj;
        vector<int> ans = obj.dfsOfGraph(V, adj);
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends