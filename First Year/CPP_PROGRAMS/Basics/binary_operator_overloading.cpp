#include<iostream>
using namespace std;
class A{
	int x, y;
	public:
	A operator +(A ob5){
		cout<<"Operator Overloading"<<endl;
		A ob6(0,0);
		ob6.x=x+ob5.x;
		ob6.y=y+ob5.y;
		return ob6;
	}
	A(int a, int b){
		x=a;
		y=b;
	}
	void display(){
		cout<<x<<" "<<y<<endl;
	}
	
};

int main(){
	int a,b;
	A ob1(7,5),ob2(20,40),ob3(0,0);
	ob3=ob1+ob2;  		//ob1 is calling the overloaded function and ob2 is the argument.
	//ob1.operator +(ob2);
	ob3.display();
}
