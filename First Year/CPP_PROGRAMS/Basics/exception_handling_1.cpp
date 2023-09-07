#include<iostream>
using namespace std;
void divide( int x, int y){
	double d=7.1;
	if(y==0)
	throw 4;
	else if(y==1)
	throw d;
	cout<<"Division"<<x/y;
}
int main(){
	int a,b;
	cout<<"Enter values of a and b"<<endl;
	cin>>a>>b;
	try{
		divide(a,b); 
	}
	catch (int d){
		cout<<"b can't be zero "<<endl;
	}
	catch (double d){
		cout<<"double value";
	}
	cout<<" End of Program"<<endl;
}
