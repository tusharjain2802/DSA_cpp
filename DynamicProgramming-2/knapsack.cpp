#include <cstring>
#include <iostream>
using namespace std;

/********************************************************************************************/
int knap(int *weights, int *values, int n, int maxWeight, int **dp) {
	if (maxWeight == 0 || n == 0) {
	return 0;
	}
	if(dp[maxWeight][n] != -1) return dp[maxWeight][n];
	if (weights[n - 1] > maxWeight) {
	return knap(weights, values, n - 1, maxWeight, dp);
	} else {
	int ans = max(values[n - 1] +
					knap(weights, values, n - 1, maxWeight - weights[n - 1], dp),
				knap(weights, values, n - 1, maxWeight, dp));
	dp[maxWeight][n] = ans;
	return ans;
	}
}
int knapsack(int *weights, int *values, int n, int maxWeight) {
	int **dp = new int*[maxWeight+1];
	for(int i=0;i<=maxWeight;i++){
		dp[i] = new int[n+1];
		for(int j=0;j<=n;j++){
			dp[i][j] = -1;
		}
	}
	return knap(weights, values, n, maxWeight, dp);
}
/********************************************************************************************/

int main() {
    int n;
    cin >> n;
    int* wt = new int[n];
    int* val = new int[n];

    for (int i = 0; i < n; i++) {
        cin >> wt[i];
    }

    for (int j = 0; j < n; j++) {
        cin >> val[j];
    }

    int w;
    cin >> w;

    cout << knapsack(wt, val, n, w) << "\n";

    delete[] wt;
    delete[] val;
}