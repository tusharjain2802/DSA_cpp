// https://leetcode.com/problems/number-of-provinces/description/

class Solution {
public:
    void dfsg(vector<vector<int>>& isConnected, int node, int vis[]){
        vis[node]=1;
        for(int i=0;i<isConnected[node].size();i++){
            if(isConnected[node][i] ==1 && i != node && vis[i] ==0){
                dfsg(isConnected, i, vis);
            }
        }
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        int V = isConnected.size();
        int visited[V];
        for(int i=0;i<V;i++){
            visited[i]=0;
        }
        int count=0;
        for(int i=0;i<V;i++){
            if(visited[i] ==0){
                count++;
                dfsg(isConnected, i, visited);
            }
        }
        return count;
    }
};