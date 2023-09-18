// https://leetcode.com/problems/shortest-path-in-binary-matrix/description/

class Solution {
public:
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        if (grid[0][0] == 1) return -1;
        queue<pair<int, pair<int, int>>> q;
        int n = grid.size();
        int m = grid[0].size();
        if(m-1 ==0 && n-1 ==0) return 1;
        vector<vector<int>> dist(n, vector<int>(m, 1e9));
        dist[0][0] = 0;
        q.push({0, {0, 0}});
        int dr[] = {-1, 0, 1, 0, 1, 1, -1, -1};
        int dc[] = {0, 1, 0, -1, 1, -1, 1, -1};
        while (!q.empty())
        {
            auto it = q.front();
            q.pop();
            int dis = it.first;
            int r = it.second.first;
            int c = it.second.second;
            for (int i = 0; i < 8; i++)
            {
                int newr = r + dr[i];
                int newc = c + dc[i];
                if (newr >= 0 && newr < n && newc >= 0 && newc < m && grid[newr][newc] == 0 && dis + 1 < dist[newr][newc])
                {
                    dist[newr][newc] = 1 + dis;
                    if (newr == n-1 && newc == m-1)
                        return dis + 2;
                    q.push({1 + dis, {newr, newc}});
                }
            }
        }
        return -1;
    }
};