#include <iostream>
using namespace std;

/********************************************************************************************/
#include<cmath>
int sol(int n, int dp[]){
    if(n<=1) return 1;
    if(dp[n]!=-1) return dp[n];
    int x = sol(n-1, dp);
    int y = sol(n-2, dp);
    int mod = pow(10, 9)+7;
    dp[n] = (int(((long)x*x)%mod) +  int(((long)x*y*2)%mod))%mod;
    return dp[n];
}
int balancedBTs(int n) {
    int dp[n+1];
    for(int i=0;i<=n;i++) dp[i] = -1;
    sol(n, dp);
}
/********************************************************************************************/

int main() {
    int n;
    cin >> n;
    cout << balancedBTs(n);
}