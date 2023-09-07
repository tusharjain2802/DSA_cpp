#include<iostream>
using namespace std;
class A{
	public:
	int b;
	A(int a)
	{   //constructor with parameter
		b=a;
		cout<<"Parameterized constructor"<<b<<endl;	
/*Base class constructor executes first even if the the derived class object is called*/
	}
};
class B: public A
{
	public:
	B(int x, int y):A(x){			//class b is not using int a but we use it to pass value to parameterized A
	cout<<"Derived class"<<y<<endl;
}
	};
int main(){
	B ob(7,9);
}

/* A derived class cannot be run alone without passing any argument because base class constructor
 runs before it and it needs argument, so if u need to run the the derived class u need to provide 
 the arguments for the base class along with it
 */
