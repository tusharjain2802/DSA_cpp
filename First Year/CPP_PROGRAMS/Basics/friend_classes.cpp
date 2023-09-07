#include<iostream>
using namespace std;
class A{
	int i;
	public:
		A(){
			i=5;
		}
		friend class B;
};
class B{
	public:
		void show(A a){
			cout<<"i= "<<a.i<<endl;
		}
};
int main(){
A a;
B b;
b.show(a);	
}
