/*FRIEND FUNCTION: It is used to access private variables defined inside the class.
It is not a member function of the class.
Always object is taken as argument for friend function.
*/
#include<iostream>
using namespace std;
class A{
	int a;
	friend void S( A ob);
	public:
	void init_a();
};

void S( A ob){
	cout<<ob.a;
}

void A::init_a(){
	cout<<"Enter a:\n";
	cin>>a;
}

int main(){
	A ob;
	ob.init_a();
	S(ob);
}
/*Write a program in C++ to swap the values of two objects of diff classes using friends function*/
