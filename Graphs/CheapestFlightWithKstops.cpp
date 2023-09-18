// https://leetcode.com/problems/cheapest-flights-within-k-stops/description/
class Solution {
public:
    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int k) {
        set<pair<int, pair<int, int>>> st;
        vector<pair<int, int>> adj[n];
        for(int i=0;i<flights.size();i++){
            adj[flights[i][0]].push_back({flights[i][1], flights[i][2]});
        }
        vector<int> dist(n, 1e9);
        dist[src] = 0;
        st.insert({0, {0, src}});
        while(!st.empty()){
            auto it = *(st.begin());
            st.erase(it);
            int stop = it.first;
            int dis = it.second.first;
            int node = it.second.second;
            for(auto i:adj[node]){
                int adjNode = i.first;
                int cost = i.second;
                if(dis+ cost < dist[adjNode] && (stop + 1 <=k || (adjNode == dst&& stop<=k))){
                    dist[adjNode] = dis+cost;
                    st.insert({stop+1, {dis+cost, adjNode}});
                }
            }
        }
        if(dist[dst] == 1e9) return -1;
        return dist[dst];
    }
};