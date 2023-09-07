// https://practice.geeksforgeeks.org/problems/rotten-oranges2536/1

//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution 
{
    public:
    //Function to find minimum time required to rot all oranges. 
    int orangesRotting(vector<vector<int>>& grid) {
       queue< pair<pair<int, int>,int> > q;
       int num;
       int x = grid.size();
       int y = grid[0].size();
        for(int i=0;i<x ;i++){
            for(int j=0;j<y ;j++){
                if(grid[i][j] == 2){
                    q.push({{i, j}, 0});
                }
            }
        }
            while(!q.empty()){
                int i=q.front().first.first;
                int j=q.front().first.second;
                num =q.front().second;
                if((i+1<x && grid[i+1][j] ==1 ) || (i-1>=0 && grid[i-1][j] ==1) || (j+1<y && grid[i][j+1] ==1) || (j-1>=0 && grid[i][j-1] ==1) ){
                    num = num+1;
                
                if (i+1<x && grid[i+1][j] ==1){
                    q.push({{i+1, j}, num});
                    grid[i+1][j] = 2;
                } 
                if (i-1>=0 && grid[i-1][j] ==1) {
                    q.push({{i-1, j}, num});
                    grid[i-1][j] = 2;
                }
                if (j+1<y && grid[i][j+1] ==1) {
                    q.push({{i, j+1}, num});
                    grid[i][j+1] = 2;
                }
                if (j-1>=0 && grid[i][j-1] ==1 ) {
                    q.push({{i, j-1}, num});
                    grid[i][j-1] = 2;
                }
                }
                q.pop();
            }
            
        for(int i=0;i<x ;i++){
            for(int j=0;j<y ;j++){
                if(grid[i][j] == 1){
                    return -1;
                }
            }
        }
            return num;
    }
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<int>>grid(n, vector<int>(m, -1));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				cin >> grid[i][j];
			}
		}
		Solution obj;
		int ans = obj.orangesRotting(grid);
		cout << ans << "\n";
	}
	return 0;
}
// } Driver Code Ends