#include<iostream>
using namespace std;
class A{
	int a;
	public:
	A (int b){
		a=b;
		cout<<this<<endl;
	}
	operator int (){
		int l= a+15;
		cout<<this;
		return l;
	}
	void show(){
		cout<<a<<endl;
	}
};
int main(){
	A ob(6);
	cout<<&ob<<endl;  //this will give the same adress pf object ob
	int e=10;
	cout<<&e<<" is adress of e"<<endl;
	e=ob;; //type conversion
//adress of after type conversion is not the same as the adress of the object ob
	cout<<e<<endl;
}

