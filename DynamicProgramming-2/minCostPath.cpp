#include <bits/stdc++.h>
using namespace std;

/********************************************************************************************/
int sol(int **input, int m, int n, int currx, int curry)
{
	if(currx == m-1 && curry == n-1) return input[m-1][n-1];
	int right=INT_MAX, down=INT_MAX, diagonal =INT_MAX;
	if(currx<m-1)  down = sol(input, m,n, currx+1, curry);
	if(curry<n-1)  right =  sol(input, m, n, currx, curry+1);
	if(curry<n-1 && currx <m-1) diagonal = sol(input, m, n, currx+1, curry+1);
	int cost = min(down, min(right, diagonal))+input[currx][curry];
	return cost;
}

int minCostPath(int **input, int m, int n)
{
    int output[m][n];
	return sol(input, m, n, 0, 0);
}
/********************************************************************************************/

int main()
{
	int **arr, n, m;
	cin >> n >> m;
	arr = new int *[n];
	for (int i = 0; i < n; i++)
	{
		arr[i] = new int[m];
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> arr[i][j];
		}
	}
	cout << minCostPath(arr, n, m) << endl;
}