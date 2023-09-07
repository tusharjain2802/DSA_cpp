#include <iostream>
using namespace std;

/********************************************************************************************/
#include<bits/stdc++.h>
int pairSum(int *arr, int n) {
	int count =0;
	unordered_map<int, int> m;
	for(int i=0;i<n;i++){
		if(m[-arr[i]]>0){
			count+= m[-arr[i]];
		}
		m[arr[i]]++;
	}

	return count;
}
/********************************************************************************************/

int main() {
    int n;
    cin >> n;

    int* arr = new int[n];

    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    cout << pairSum(arr, n);

    delete[] arr;
}