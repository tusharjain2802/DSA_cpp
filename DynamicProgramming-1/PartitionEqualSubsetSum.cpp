// https://leetcode.com/problems/partition-equal-subset-sum/description/

class Solution {
public:
    bool solve(vector<int>& nums, int idx, int target, int sum, vector<vector<int>>& dp){
        if(idx == nums.size()) return false;
        if(sum > target) return false;
        if(sum == target) return true;
        if(dp[idx][sum] != -1) return dp[idx][sum];
        bool excl = solve(nums, idx+1, target, sum, dp);
        bool incl =0;
        if(nums[idx] <= (target-sum)) incl =solve(nums, idx+1, target, sum+nums[idx], dp);
        dp[idx][sum]=(incl|| excl);
       return dp[idx][sum];
    }
    bool canPartition(vector<int>& nums) {
        int sum =0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            sum+=nums[i];
        }
        if(sum%2 !=0) return false;
        int target = sum/2;
        vector<vector<int>> dp(n, vector<int>(sum+1, -1));
        return solve(nums, 0, target, 0, dp);  
    }
};