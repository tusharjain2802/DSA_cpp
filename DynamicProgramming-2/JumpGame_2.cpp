// https://leetcode.com/problems/jump-game-ii/description/

class Solution {
public:
    int solve(vector<int>& nums, int i, vector<int> &dp){
        if(i>=nums.size()) return INT_MAX;
        if(i == nums.size() -1) return 0;
        if(dp[i] != -1) return dp[i];
        int minn = nums.size();
        for(int j=i+1;j<=i+nums[i];j++){
            if(j<nums.size()) minn = min(minn,1+ solve(nums, j, dp));
        }
        return dp[i] = minn;
    }
    int jump(vector<int>& nums) {
        vector<int> dp(nums.size(), -1);
        return solve(nums, 0, dp);
    }
};