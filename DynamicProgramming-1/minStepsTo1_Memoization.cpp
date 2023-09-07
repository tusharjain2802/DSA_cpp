#include <bits/stdc++.h>
using namespace std;
/********************************************************************************************/
int sol(int n, int dp[]){
	if(n==1){
		return 0;
	}
	if(dp[n] !=-1 ) return dp[n];
	int dec = 1+sol(n - 1, dp);
	int div2= INT_MAX, div3=INT_MAX;
	if(n%2==0 )div2 =1+ sol(n/2,dp);
	if(n%3==0) div3 =1+ sol(n/3 , dp);
    dp[n] = min(dec, min(div2, div3));
    return dp[n];
}
int countMinStepsToOne(int n)
{
	int dp[n+1];

	for(int i=0;i<=n;i++){
		dp[i]=-1;
	}
	return sol(n,dp);
}
/********************************************************************************************/

int main()
{
	int n;
	cin >> n;
	cout << countMinStepsToOne(n);
}