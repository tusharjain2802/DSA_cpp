#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		for(int j=1;j<n-i+1;j++){
			cout<<j;
		}
		for(int j=0;j<2*i;j++){
			cout<<"*";
		}
		for(int j=n-i;j>0;j--){
			cout<<j;
		}
		cout<<endl;		
	}
}
