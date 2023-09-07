/*
#include<iostream>
using namespace std;
class test{
	const int i;
	public:
		test(int x):i(x){}  //initialised using constructor.
//As i is cont variable therefore its value can be initialised only one time using :i(x)		
		void show(){
			cout<<"i= "<<i<<endl;
		}
};
int main(){
	test t(190);
	t.show();
}
*/

//constant class member function
#include<iostream>
using namespace std;
class A{
	int x;
	public:
		A(int a){
			x=a; //error can't modify object variable.
		}
		void func()const{
		int a=x+5;
		cout<<a;
		}
};
int main(){
A ob(7);
ob.func();	
}
