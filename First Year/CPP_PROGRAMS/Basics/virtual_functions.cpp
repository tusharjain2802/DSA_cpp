#include<iostream>
using namespace std;
class A{
	protected:
		int i;
	public:
		A(){
			cout<<"A class constructor"<<endl;
		}
};
class B:virtual public A {
	public:
		B(){
			cout<<"B class constructor"<<endl;
		i=30;
		}
};
class C : public virtual A{
	public:
		C(){
			cout<<"C class constructor"<<endl;
			i=40;
		}
};
class D : public B, public C{
	public:
		void show(){
		cout<<"value of i="<<i;  //dont need to use scope resolution
		}
};
/*virtual function makes a single copy and doesnt not allow to call the base class again*/
int main(){
	D obj;
	obj.show();
}
/*
A class constructor
B class constructor
A class constructor
C class constructor
value of i=30
--------------------------------
Process exited after 0.0428 seconds with return value 0
Press any key to continue . . .
---------------------------------
outpit without virtual function
*/
