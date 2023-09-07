/*#include<iostream>
using namespace std;
class A{
	public:
		void operator -(){
			cout<<"Operator Overloading";
		}
};
int main(){
	A ob;
	-ob;  //we have overloaded minus operator
	//OR
	//ob.operator -()
}
*/


/*Write a program using opertor overloading - unary minus for negating the values of teo variables of class by appropriate member functions.
*/
#include<iostream>
using namespace std;
class A{
	int x, y;
	public:
	void set(int a, int b){
		x=a;
		y=b;
	}
	void operator -(){
		x=-1*x;
		y=-1*y;
		cout<<"After negating the values of x and y, x="<<x<<"and y="<<y<<endl;
	}
	
};

int main(){
	int a,b;
	A ob;
	cin>>a>>b;
	ob.set(a,b);
	-ob;
}
