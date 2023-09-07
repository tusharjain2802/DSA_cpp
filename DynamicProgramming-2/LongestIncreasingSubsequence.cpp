// https://leetcode.com/problems/longest-increasing-subsequence/description/

class Solution {
public:
    int solve(int idx, int prev, vector<int>& nums, int n, vector<vector<int>> &dp){
        if(idx == n) return 0;
        if(dp[idx][prev+1] != -1) return dp[idx][prev+1];
        int len = solve(idx+1, prev, nums, n, dp);
        if(prev == -1 || nums[idx]> nums[prev]){
            len = max(len,1+solve(idx+1, idx, nums, n, dp));
        }
        return dp[idx][prev+1] = len;
    }
    int lengthOfLIS(vector<int>& nums) {
        int n=nums.size();
        vector<vector<int>> dp(n, vector<int>(n+1, -1));
        return solve(0, -1, nums, n, dp);
    }
};