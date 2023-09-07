/*
You are given two strings S and T of lengths M and N, respectively. Find the 'Edit Distance' between the strings.
Edit Distance of two strings is the minimum number of steps required to make one string equal to the other. 
In order to do so, you can perform the following three operations:
1. Delete a character
2. Replace a character with another one
3. Insert a character
*/

#include <iostream>
#include <cstring>
using namespace std;

/********************************************************************************************/
#include<bits/stdc++.h>

int edit(string s1, string s2, int ** dp) {
	
  int x = s1.size();
  int y = s2.size();
  int a = INT_MAX, b = INT_MAX, c = INT_MAX, ans;
  if (x == 0) {
    return y;
  }
  if(dp[x][y] != -1) return dp[x][y];
  if (s1[0] == s2[0]) {
    return edit(s1.substr(1), s2.substr(1), dp);
  } else {
    a = 1 + edit(s1.substr(1), s2, dp);
    if (y != 0)
      b = 1 + edit(s1, s2.substr(1), dp);
    if (y != 0)
      c = 1 + edit(s1.substr(1), s2.substr(1), dp);

    ans = min(a, min(b, c));
  }
  dp[x][y]= ans;
  return ans;
}
int editDistance(string s1, string s2) {
	int x = s1.size();
	int y=s2.size();


	int **dp = new int*[x+1];
	for(int i=0;i<=x;i++){
		dp[i] = new int[y+1];
		for(int j=0;j<=y;j++){
			dp[i][j] = -1;
		}
	}

	return edit(s1, s2, dp);
}
/********************************************************************************************/

int main()
{
	string s1;
	string s2;

	cin >> s1;
	cin >> s2;

	cout << editDistance(s1, s2) << endl;
}