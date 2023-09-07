#include<iostream>
using namespace std;
int swap(int *a, int *b){
	int t=*a;
	*a=*b;
	*b=t;
}
int main(){
	int c=2;
	int d=3;
	swap(&c,&d);
	cout<<c<<endl<<d;
}
