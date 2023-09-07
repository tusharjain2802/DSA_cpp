#include<iostream>
using namespace std;
class A{
	public:
		int a;
};
int main(){
	int A::*p=&A::a;
	A ob;
	//ob.a=50;
	ob.a*p=50;
	cout<<ob.a;
}
