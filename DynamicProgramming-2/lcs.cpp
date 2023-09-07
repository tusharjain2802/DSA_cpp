//{ Driver Code Starts
#include<bits/stdc++.h>
const int mod=1e9+7;
using namespace std;

// } Driver Code Ends
// function to find longest common subsequence

class Solution
{
    public:
    //Function to find the length of longest common subsequence in two strings.
    int lcsopt(string s1, string s2, int **dp){
        int x = s1.size();
        int y= s2.size();
        int ans;
        if(x ==0 || y ==0){
            return 0;
        }
        if(dp[x][y]!=-1){
            return dp[x][y];
        }
        if(s1[0] == s2[0]){
            ans = 1+ lcsopt(s1.substr(1), s2.substr(1), dp);
        }
        else{
        int a = lcsopt(s1.substr(1), s2, dp);
        int b = lcsopt(s1, s2.substr(1), dp);
        int c = lcsopt(s1.substr(1), s2.substr(1), dp);
        ans = max(a, max(b, c));
        }
        dp[x][y] = ans;
        return ans;
    }
    
    int lcs(int p, int l, string s1, string s2)
    {
        int x = s1.size();
        int y=s2.size();
        int **dp = new int*[x+1];
        for(int i=0;i<=x;i++){
            dp[i] = new int[y+1];
            for(int j=0;j<=y;j++){
                dp[i][j] = -1;
            }
        }
        return lcsopt(s1, s2, dp);
    }
};


//{ Driver Code Starts.
int main()
{
    int n,k,x,y;
    cin>>x>>y;          // Take size of both the strings as input
    string s1,s2;
    cin>>s1>>s2;        // Take both the string as input
    Solution ob;
    cout << ob.lcs(x, y, s1, s2) << endl;
    return 0;
}

// } Driver Code Ends   