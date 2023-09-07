//returning constructor
#include<iostream>
using namespace std;
class A{
	int a,b;
	public:
	A(){
		cout<<"zero parameter constructor"<<endl;
		a=10;
		b=19;
	}
	A(int x){
		cout<<"one parameter constructor"<<endl;
		a=9;
		b=x;
	}
	A(int x, int y){
		cout<<"two parameter constructor"<<endl;
		a=x;
		b=y;
	}
	A fn(){
		a=a*5;
		b=b+5;
		return A(a,b);
	}
	void show(){
		cout<<a<<" "<<b<<endl;
	}
};
int main(){
	A ob1(5,7), ob2(0);
	ob2=ob1.fn();  //for ob2 a=25 and b=12 and return will run the two parameter function and store on ob2.
	ob2.show();
}
