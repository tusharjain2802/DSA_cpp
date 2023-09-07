//2+ob
//=,[],(),->
//()
#include<iostream>
using namespace std;
class A{
	int a,b;
	public:
		A(int c=0,int d=0){
			a=c;
			b=d;
		}
		A operator () (int f){
		A obj;
		obj.a=a+f;
		obj.b=b+f;
		return obj;	
		}
		int operator [](int e){
			if(e==0)
			return a;
			else 
			return b;
		}
		void show(){
			cout<<a<<endl<<b;
		}
};
int main(){
	A ob(2,9);
	A ob1;
	ob1=ob(7);
	//A ob1=ob.operator()(7);
	ob1.show();
	cout<<endl<<ob[0]<<endl<<ob[4];
	//there is no array so it will call [] operator.
}
