#include<iostream>
using namespace std;
class A{
	int a,b;
	public:
		A(){
			
		}
		A(int d, int e){
			a=d;
			b=e;
		}
		friend A operator =(A obj, A obj1);
		void show(){
			cout<<a<<endl<<b;
		}
};
A operator =(A obj, A obj1){
	obj.a=obj1.a;
	obj.b=obj1.b;
	return obj;
}
int main(){
	A ob1(2,7), ob2(5,8);
	ob2=ob1;
	//ob2.=(ob1)
	ob2.show();
	}
