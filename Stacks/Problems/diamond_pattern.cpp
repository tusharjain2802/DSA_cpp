#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	int half = n/2;
	for(int i=0;i<half;i++){
		for(int j=i;j<half;j++){
			cout<<" ";
		}
		for(int k=0;k<(2*i)+1;k++){
			cout<<"*";
		}
		cout<<endl;		
	}
	for(int i=0;i<n;i++){
		cout<<"*";
	}
	cout<<endl;
	for(int i=0;i<half;i++){
		for(int j=0;j<i+1;j++){
			cout<<" ";
		}
		for(int k=(2*i)-1;k<half;k++){
			cout<<"*";
		}
		cout<<endl;		
	}
}


