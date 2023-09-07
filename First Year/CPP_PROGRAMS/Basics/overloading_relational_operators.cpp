//relational operatrors = < > ==
#include<iostream>
using namespace std;
class A{
	int a,b;
	public:
		A(){
			
		}
		A(int d, int e){
			a=d;
			b=e;
		}
		A operator =(A obj1);
		void show(){
			cout<<a<<endl<<b;
		}
};
A A:: operator =(A obj1){  //return type class name :: function
	a=obj1.a;
	b=obj1.b;
	return *this;
}
int main(){
	A ob1(2,7), ob2(5,8);
	ob2=ob1; //ob2.=(ob1)
	ob2.show(); //it will show values of ob1.
}
