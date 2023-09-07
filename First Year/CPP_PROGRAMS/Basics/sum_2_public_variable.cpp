#include<iostream>
using namespace std;
class A{
	int x;
	public:
	void input(){
		cin>>x;
	}
	int f(){
		return x;
	}
}ob1;
int main(){
	A ob1, ob2;
	ob1.input();
	ob2.input();
	int c=ob1.f();
	int d=ob2.f();
	cout<<c+d;
}
