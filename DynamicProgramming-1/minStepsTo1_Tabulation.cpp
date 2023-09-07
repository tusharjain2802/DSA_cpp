#include <bits/stdc++.h>
using namespace std;

/********************************************************************************************/
#include<bits/stdc++.h>
int countStepsToOne(int n)
{
	if(n==1) return 0;
	if(n==2) return 1;
	if(n==3) return 1;
	int x=1;
	int dp[n+1]; 
	dp[1] =0;
	dp[2] = 1;
	dp[3] =1;
	int dec=INT_MAX, div2=INT_MAX, div3=INT_MAX, sm; 
	for(int i=4;i<=n;i++){
		div2 = INT_MAX;
		div3= INT_MAX;
		if(i%2==0) div2= dp[i/2];
		if(i%3==0) div3 =dp[i/3];
		dec = dp[i-1];
		sm = min(div2, div3);
		sm = min(sm, dec);
		dp[i] = sm+1;
	}
	return dp[n];
}
/********************************************************************************************/

int main()
{
	int n;
	cin >> n;
	cout << countStepsToOne(n);
}