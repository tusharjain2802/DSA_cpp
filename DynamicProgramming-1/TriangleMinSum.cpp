// https://leetcode.com/problems/triangle/description/

class Solution {
public:
    int solve(vector<vector<int>>& triangle, int n, int m , vector<vector<int>>& dp, int i, int j){
        if(i==n-1) return triangle[i][j];
        int ans=INT_MAX;
        if(dp[i][j] != -1) return dp[i][j];
        ans = min(ans, triangle[i][j] + solve(triangle, n, m, dp, i+1, j));
        if(j+1<m) ans = min(ans, triangle[i][j] + solve(triangle, n, m, dp, i+1, j+1));
        return dp[i][j] = ans;
    }
    int minimumTotal(vector<vector<int>>& triangle) {
        int n = triangle.size();
        int m = triangle[n-1].size();
        vector<vector<int>> dp(n, vector<int>(m, -1));
        return solve(triangle, n, m, dp, 0, 0);
    }
};