// https://leetcode.com/problems/minimum-path-sum/description/

class Solution {
public:
    
    int solve(vector<vector<int>>& grid, int n, int m,  vector<vector<int>>& dp, int i, int j){
        if(i == n - 1 and j == m - 1){
            return grid[i][j];
        }
       
        if(dp[i][j] != -1) return dp[i][j];
         int ans = INT_MAX;
        if(i + 1 < n) ans = min(ans, grid[i][j] + solve(grid, n, m, dp, i + 1, j));
        if(j + 1 < m) ans = min(ans, grid[i][j] + solve(grid, n, m, dp, i , j+1));
        return dp[i][j] = ans;
    }
    int minPathSum(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<int>> dp(n, vector<int>(m, -1));
        return solve(grid, n, m, dp, 0, 0);
    }
};