/*Output the minimum number of squares for a number Eg. 100 = 10^2, so output is 2*/

#include <bits/stdc++.h>
using namespace std;

/********************************************************************************************/
int sol(int n, int dp[]){
	if(sqrt(n)-floor(sqrt(n)) == 0) return 1;
	if(n<=3) return n;
	if(dp[n]!= -1) return dp[n];
	dp[n]=n;
	for(int i=1;i<=n;i++){

		int num = n-(i*i);
		if(num<0) break;
        else dp[n] = min(dp[n], 1 + sol(num, dp));
    }
	return dp[n];
}
int minCount(int n){
	int dp[n+1];
	for(int i=0;i<=n;i++) dp[i] =-1;
	sol(n, dp);
}
/********************************************************************************************/

int main()
{
	int n;
	cin >> n;
	cout << minCount(n);
}