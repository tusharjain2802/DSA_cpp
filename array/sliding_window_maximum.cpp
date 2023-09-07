#include<iostream>
using namespace std;
int main(){
	int n,k;
	cout<<"Enter the value for n and k: ";
	cin>>n>>k;
	int arr[n];
	cout<<"Enter the values of array:"<<endl;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int max;
	cout<<"OUTPUT: "<<endl;
	for(int i=0;i<n-k;i++){
		max=arr[i];
		for(int j=0;j<k;j++){
			if(arr[j+i]>max){
				max=arr[j+i];
			}
		}
		cout<<max<<" ";
	}
	
}
