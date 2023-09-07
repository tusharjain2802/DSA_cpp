/*
#include<iostream>
using namespace std;
int main(){
	int a,b;
	cout<<"Enter values of a and b"<<endl;
	cin>>a>>b;
	if(b!=0)
	cout<<"division="<<a/b;
	else{
		cout<<"b can't be zero";
		return 0;
	}
}
// divide by zero cant be cant be handled by program so we use if else statement
// there  is also another way with better exception handling.
*/
#include<iostream>
using namespace std;
int main(){
	int a,b;
	cout<<"Enter values of a and b"<<endl;
	cin>>a>>b;
	try{
		if (b==0)
		throw " b can't be zero"; 
		cout<<"division="<<a/b; 
}
	catch (const char *p){
		cout<<p<<endl;
	}
	cout<<" End of Program"<<endl;
}
