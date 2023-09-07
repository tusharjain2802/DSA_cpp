// https://practice.geeksforgeeks.org/problems/shortest-path-in-undirected-graph-having-unit-distance/1
//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    vector<int> shortestPath(vector<vector<int>>& edges, int N,int M, int src){
        vector<int> adj[N];
        for(int i=0;i<M;i++){
            adj[edges[i][0]].push_back(edges[i][1]);
            adj[edges[i][1]].push_back(edges[i][0]);
        }
        vector<int> dist(N, INT_MAX);
        dist[src] = 0;
        queue<pair<int, int>> q;
        q.push({src, 0});
        while(!q.empty()){
            pair<int, int> p = q.front();
            q.pop();
            int dis = p.second;
            int node = p.first;
            for(auto it:adj[node]){
                if(dist[it] > dis+1){
                    dist[it] = dis+1;
                    q.push({it, dis+1});
                }
            }
        }
        for(int i =0;i<N;i++){
            if(dist[i] == INT_MAX){
                dist[i] = -1;
            }
        }
        return dist;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m; cin >> n >> m;
        vector<vector<int>> edges;

        for (int i = 0; i < m; ++i) {
            vector<int> temp;
            for(int j=0; j<2; ++j){
                int x; cin>>x;
                temp.push_back(x);
            }
            edges.push_back(temp);
        }

        int src; cin >> src;

        Solution obj;

        vector<int> res = obj.shortestPath(edges, n, m, src);

        for (auto x : res){
            cout<<x<<" ";
        }
        cout << "\n";
    }
}

// } Driver Code Ends