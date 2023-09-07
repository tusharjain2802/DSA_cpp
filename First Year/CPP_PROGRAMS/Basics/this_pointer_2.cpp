//this pointer
//this pointer
#include<iostream>
using namespace std;
class A{
	int a,b;
	public:
	A set(int x, int y){
		this->a=x+9; 
		this->b=y+12;
		return *this;
	}
	void display(){
		cout<<a<<" "<<b;
	}
};
int main(){
	A ob,ob1;
	ob1=ob.set(4,5);
	ob1.display();
}
/*
This pointer stores the adress of the current object.It means the object which is used to call the function.
*/
