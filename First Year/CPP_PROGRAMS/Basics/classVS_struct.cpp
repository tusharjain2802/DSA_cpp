#include<iostream>
using namespace std;
class A{
  	//it makes variable a public
	int a;
	float b;

		//Writing public makes all the variables public defined under it.
	void input(){
		a=78;
		b=65.7;
	}
	public:
	void display(){
		input();
		cout<<"a:"<<a<<endl<<"b:"<<b<<endl;
	}
};
int main(){
	A ob; 	//ob is an object of A class
  //it is allowed because input function is defined in public.
	ob.display();
	//ob.a=9;
}
//By default everything defined in class is private.

/*
#include<iostream>
using namespace std;
struct A{
	int a;
	float b;
};
int main(){
	A ob; 	//ob is an object of A class
	ob.a=9;
	cout<<"ob.a="<<ob.a;
}
//By default everything defined in struct in public.
*/
