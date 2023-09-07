#include <iostream>
using namespace std;

/********************************************************************************************/

long calc(int n, long dp[]){
	if(n==0){
		return 1;
	}
	if(n==1 || n==2){
		return n;
	}
	if(dp[n] != -1) return dp[n];
	dp[n] = calc(n-1, dp)+ calc(n-2, dp)+ calc(n-3, dp);
	return dp[n];
}
long staircase(int n)
{
	long dp[n+1];
	for(int i=0;i<=n;i++) dp[i] = -1;
	return calc(n,dp);
}
/********************************************************************************************/


int main()
{
	int n;
	cin >> n;
	cout << staircase(n);
}