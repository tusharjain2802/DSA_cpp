//new and delete operator
//dynamic memory allocation
//new operator overloading syntax is void *operator new (size_t)
//delete operator overloading syntax is void operator delete (void *)
//1. local operator overloading (in context of claass)
//2. global operator overloading
#include<iostream>
#include<cstdlib>
using namespace std;
void *operator new (size_t t){
	void *p;
	cout<<"hello new global op overloading"<<endl;
	p=malloc (t);
}
	void operator delete (void *p){
		cout<<"Hello delete global op overloading"<<endl;
		free(p);
}
class A{
	public:
		void *operator new (size_t t){
			void *p;
			cout<<"hello new op overloading"<<endl;
			p=malloc (t);
		}
		void operator delete (void *p){
			cout<<"Hello delete op overloading"<<endl;
			free(p);
		}
};
int main(){
	int *z= new int;
	delete(z);
	A *ob= new A;
	delete(ob);
	
}
