#include<iostream>
using namespace std;
class base{
	public:
	virtual void show(){   //function overiding
	cout<<"Base"<<endl;
}
};
class derived : public base{
	public:
	void show(){
	cout<<"Derived"<<endl;
}
};
int main(){
	derived d2;
	base b1;
	b1.show();
	derived d1;
	d1.show();
	base *b2=&d2;
	d2.show();
	b2->show();  //base without virtual function
}
//virtual functions are derived by virtual pointers and virtual tables.
// virtual tables are total number of base class + number of derived classes
/*virtual functions inherits the class by making its copy anf hence when the virtual class is 
called the constructors of the base class will not run
*/
