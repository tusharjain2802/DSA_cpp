//this pointer
#include<iostream>
using namespace std;
class A{
	int a,b;
	public:
	int set(int x, int y){
		this->a=x; 
		this->b=y;
	}
	void display(){
		cout<<a<<" "<<b;
	}
};
int main(){
	A ob;
	ob.set(4,5);
	ob.display();
}
/*
This pointer stores the adress of the current object.It meaans the object which is used to call the function.
*/
