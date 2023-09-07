// https://leetcode.com/problems/coin-change-ii/description/

class Solution {
public:
    int solve(vector<int>& coins, int amount, int idx, vector<vector<int>> &dp){
        if(amount == 0) return 1;
        if(amount < 0) return 0;
        if(idx >= coins.size()) return 0;
        if(dp[idx][amount] != -1) return dp[idx][amount];
        int ans=0;
        if(coins[idx] > amount){
            ans+= solve(coins, amount, idx+1, dp);
        }
        else{
            ans+=solve(coins, amount, idx+1, dp);
            ans+=solve(coins, amount-coins[idx], idx, dp);
        }
        return dp[idx][amount] = ans;
    }
    int change(int amount, vector<int>& coins) {
        vector<vector<int>> dp(coins.size(), vector<int>(amount+1, -1));
        return solve(coins, amount, 0, dp);
    }
};