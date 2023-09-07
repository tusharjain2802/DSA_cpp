#include<iostream>
using namespace std;
class parent{
	protected://if it is made private then it will no be eccessed to the child class and program wiull not run.
		int a;
	
};
//protected means can be used in the derived class but not outside it.
class child:protected parent		
//it inherits the function of the parent class
{		
	public:
		void input(){
			cin>>a;
		}
		
};
class C:protected child
{
	public:
	inputx(){
		cin>>a;
	} 
	void display(){
		cout<<a;
	}
};
//protected
int main(){
	C ob1;   //this program will run despite the a to be protected
	ob1.inputx();
	ob1.display();
}
/*
If class is inherited publicly:
public->public->public
protected->protected->protected
private->inaccessible

If class in inherited protected way:
public->protected->protected
protected->protected->protected
private->inaccessible->inaccessible
*/
