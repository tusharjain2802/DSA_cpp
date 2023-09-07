#include<iostream>
using namespace std;
class A{
	int *x;
	public:
		A(){		//default constructor
			x= new int(6);
		}
		A(int a,int b){		//parameterised constructor
			cout<<a<<b<<endl;
		}
		~A(){
		cout<<"Hello Destructor";
		}
		void display(){
			cout <<*x<<endl;
		}
};
int main(){
	A ob1(5,6);
	A *ob= new A(4,6);
	delete (ob);   //use delete function to run destructor for a pointer object
	
}
