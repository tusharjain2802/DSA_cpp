// https://leetcode.com/problems/longest-common-subsequence/description/

class Solution {
public:
    int longestCommonSubsequence(string text1, string text2) {
        int m=text1.length();int n=text2.length();
        vector<vector<int>>dp(m+1,vector<int>(n+1,0));
        for(int i=1;i<=m;i++){
            for(int j=1;j<=n;j++){
                if(text1[i-1]==text2[j-1]) dp[i][j]=1+dp[i-1][j-1];
                else dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
            }
        }
        return dp[m][n];
    }
};

// class Solution {
// public:
//     int lcsopt(string &s1, string &s2, vector<vector<int>> &dp, int x, int y){
//         int ans=0;
//         if(x >= s1.size() || y >= s2.size()){
//             return 0;
//         }
//         if(dp[x][y]!=-1){
//             return dp[x][y];
//         }
//         if(s1[x] == s2[y]){
//             ans = 1+ lcsopt(s1, s2, dp, x+1, y+1);
//         }
//         else{
//         int a = lcsopt(s1, s2, dp, x+1, y);
//         int b = lcsopt(s1, s2, dp, x, y+1);
//         ans = max(a, b);
//         }
        
//         return dp[x][y] = ans;
//     }
//     int longestCommonSubsequence(string s1, string s2) {
//         int x = s1.size();
//         int y=s2.size();
//         vector<vector<int>> dp(x, vector<int>(y, -1));
//         return lcsopt(s1, s2, dp, 0, 0);
//     }
// };