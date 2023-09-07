/*
a class which has atleast one (no defination)pure virtual function is abstract class.
abstract class has no objects
*/
#include<iostream>
using namespace std;
class A{
	protected:
	int a;
	public:
		A(){
			cout<<"Constructor of A\n";
			a=7;
		}
	virtual void inta()=0;// it is pure virual func	
	void show(){
		cout<<a;
	}
};
class D:public A{
	public:
		D(){
			cout<<"Constrctor of D"<<endl;
		}
		void inta(){
			a=20;
		}
};
int main(){
	A *ob=new D();
	//A ob; we cannot create this object bcoz the class is having one pure virtual func i.e. inta()
	ob->inta(); //without calling this func, output will be a=7
	ob->show();
}
