// https://practice.geeksforgeeks.org/problems/replace-os-with-xs0052/1

//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    void dfs(vector<vector<char>>& mat, int row, int col,vector<vector<int>> &vis, int n, int m){
        vis[row][col] =1;
        if(row+1<n && mat[row+1][col] =='O' && vis[row+1][col] == 0){
            dfs(mat, row+1, col, vis, n, m);
        } 
        if(row-1>=0 && mat[row-1][col] =='O' && vis[row-1][col] == 0) {
            dfs(mat, row-1, col, vis, n, m);
        }
        if(col+1<m && mat[row][col+1] =='O' && vis[row][col+1] == 0) {
            dfs(mat, row, col+1, vis, n, m);
        }
        if(col-1>=0 && mat[row][col-1] =='O' && vis[row][col-1] == 0 ) {
            dfs(mat, row, col-1, vis, n, m);
        }
    }
    vector<vector<char>> fill(int n, int m, vector<vector<char>> mat)
    {
        vector<vector<int>> vis(n, vector<int>(m, 0));
        for(int i=0;i<n;i++){
            if(mat[i][0] == 'O'){
                dfs(mat, i, 0, vis, n, m);
            }
            if(mat[i][m-1] == 'O'){
                dfs(mat, i, m-1, vis, n, m);
            }
        }
        for(int i=0;i<m;i++){
            if(mat[0][i] == 'O'){
                dfs(mat, 0, i, vis, n, m);
            }
            if(mat[n-1][i] == 'O'){
                dfs(mat, n-1, i, vis, n, m);
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(vis[i][j] ==0 && mat[i][j] == 'O'){
                    mat[i][j] = 'X';
                }
            }
        }
        return mat;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, m;
        cin>>n>>m;
        vector<vector<char>> mat(n, vector<char>(m, '.'));
        for(int i = 0;i < n;i++)
            for(int j=0; j<m; j++)
                cin>>mat[i][j];
        
        Solution ob;
        vector<vector<char>> ans = ob.fill(n, m, mat);
        for(int i = 0;i < n;i++) {
            for(int j = 0;j < m;j++) {
                cout<<ans[i][j]<<" ";
            }
            cout<<"\n";
        }
    }
    return 0;
}
// } Driver Code Ends