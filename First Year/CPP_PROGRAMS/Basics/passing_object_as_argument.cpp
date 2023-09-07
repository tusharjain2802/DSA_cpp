/*
#include<iostream>
using namespace std;
int sum(int a, int b){
	return a+b;
}
int main(){
int x=sum(5, 7);
cout<<x;
}
*/
#include<iostream>
using namespace std;
class A{
	int x;
	public:
	void input(){
		cin>>x;
	}
	int sum(A ob3){		//value of ob2 is passed on a new object named ob3.
		return x+ob3.x;		//the value of x will be of ob1 because while calling the function we used ob1.sum(ob2)
	}
}ob1;
int main(){
	A ob1, ob2;
	ob1.input();
	ob2.input();
	cout <<ob1.sum(ob2);
}
