#include <iostream>
using namespace std;

/********************************************************************************************/
#include<bits/stdc++.h>
int fact(int n) {
   if ((n==0)||(n==1))
   return 1;
   else
   return n*fact(n-1);
}
int getPairsWithDifferenceK(int *arr, int n, int k) {
	map<int,int>m;
	for(int i=0;i<n;i++){
		m[arr[i]]++;
	}
	map<int,int>::iterator beg = m.begin();
	map<int,int>::iterator end = ++beg;
	beg--;
	int ans=0;
	if(k==0){
		while(beg!=m.end()){
			ans+=fact(beg->second-1);
			beg++;
		}
		return ans;
	}
	else{
	while(end!=m.end()){
		//cout<<ans<<" "<< beg->first<<" "<<end->first<<endl;
		if(end->first - beg->first == k){
			ans+= (beg->second* end->second);
			end++;
		}
		else if(end->first - beg->first > k){
			beg++;
		}
		else{
			end++;
		}
	}
	return ans;
	}
}
/********************************************************************************************/

int main() {
    int n;
    cin >> n;

    int *input = new int[n];

    for (int i = 0; i < n; i++) {
        cin >> input[i];
    }

    int k;
    cin >> k;

    cout << getPairsWithDifferenceK(input, n, k);

    delete[] input;
}