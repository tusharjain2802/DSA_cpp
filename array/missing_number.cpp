#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"Enter size of array: ";
	cin>>n;
	int arr[n];
	cout<<"Enter the elements"<<endl;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int count = arr[0];
	for(int i=0;i<n;i++){
		if (count!=arr[i]){
			break;
		}
		count++;
	}
	cout<<"The missing number in the array is "<<count<<".";	
}
