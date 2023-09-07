//destructor is defined using tilt symbol ~
//no arguments are passed in destructor
//it has no return type.
#include<iostream>
using namespace std;
class A{
	public:
		A(int a, int b){
			cout<<a<<b<<endl;
		}
		~A(){
			cout<<"Hello Destructor"<<endl;
		}
};
int main(){
	A ob1(5,6);
	A *ob= new A(4,6);
	//no memory is allocated to a pointer. new is used to allocate memory.
	delete (ob);   //use delete function to run destructor for a pointer object
	
}
