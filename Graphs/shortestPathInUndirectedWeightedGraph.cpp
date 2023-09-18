// https://practice.geeksforgeeks.org/problems/shortest-path-in-weighted-undirected-graph/1

// Dijkstra
//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    vector<int> shortestPath(int V, int m, vector<vector<int>>& edges) {
        vector<pair<int, int>> adj[V+1];
        for(auto it : edges){
            adj[it[0]].push_back({it[1], it[2]});
            adj[it[1]].push_back({it[0], it[2]});
        }
        set<pair<int, int>> st;
        st.insert({0, 1});
        vector<int> dist(V+1, 1e9);
        vector<int> parent(V+1);
        for(int i=0;i<=V;i++) parent[i] = i;
        dist[1] =0;
        while(!st.empty()){
            auto it = *(st.begin());
            int node = it.second;
            int dis = it.first;
            st.erase(it);
            for(auto i: adj[node]){
                int adjNode = i.first;
                int edjW = i.second;
                if(dis + edjW < dist[adjNode]){
                    if(dist[adjNode] != 1e9){
                        st.erase({dist[adjNode], adjNode});
                    }
                    dist[adjNode] = dis+edjW;
                    st.insert({dis+edjW, adjNode});
                    parent[adjNode] = node;
                }
            }
        }
        if(dist[V] == 1e9) return { -1};
        vector<int> path;
        path.push_back(V);
        int temp = V;
        while(temp != 1){
            path.push_back(parent[temp]);
            temp = parent[temp];
        }
        reverse(path.begin(), path.end());
        return path;
    }
};

//{ Driver Code Starts.
int main() {
    // your code goes here
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> edges;
        for (int i = 0; i < m; ++i) {
            vector<int> temp;
            for (int j = 0; j < 3; ++j) {
                int x;
                cin >> x;
                temp.push_back(x);
            }
            edges.push_back(temp);
        }

        Solution obj;
        vector<int> res = obj.shortestPath(n, m, edges);
        for (auto x : res) {
            cout << x << " ";
        }
        cout << "\n";
    }
}

// } Driver Code Ends