#include<iostream>
using namespace std;
int sum (int a, int b){
	return a+b;
}
int main(){
	int (*d)(int,int);
	d=sum;
	int f=(*d)(7,8);
	cout<<f;
	//cout<<*d<<endl<<sum(6,7)<<endl;
	//cout<<sum;
}
