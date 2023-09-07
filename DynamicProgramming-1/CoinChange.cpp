// https://leetcode.com/problems/coin-change/description/

class Solution {
public:
    int solve(vector<int>& coins, int amount, int i, vector<vector<int>> &dp){
        if(amount==0)return 0;
        if(amount<0 || i>=coins.size()) return INT_MAX-1;
        if(dp[i][amount]!= -1) return dp[i][amount];
        int res=INT_MAX-1;
        if(coins[i] > amount) {
            res = min(res,solve(coins, amount, i+1, dp));
        }
        else{
            int take = 1+ solve(coins, amount-coins[i], i, dp);
            int doNotTake = solve(coins, amount, i+1, dp);
            res = min(res, min(take, doNotTake));
        }
        return dp[i][amount] = res;
    }
    int coinChange(vector<int>& coins, int amount) {
        vector<vector<int>> dp(coins.size(), vector<int>(amount+1, -1));
        int ans= solve(coins, amount,0, dp);
        if(ans == INT_MAX-1) return -1;
        return ans;
    }
};