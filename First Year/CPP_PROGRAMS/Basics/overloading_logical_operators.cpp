//logical operator overloading ! && ||
#include<iostream>
using namespace std;
class A{
	int a;
	public:
		A(){
			
		}
		A(int l){
			a=l;
		}
		A operator &&(A obj){
			A obj1;
			obj1.a=a&&obj.a;
			return obj1;
		}
		A operator ||(A obj){
			A obj1;
			obj1.a=a||obj.a;
			return obj1;
		}
		void show(){
			cout<<a<<endl;
		}
};
int main(){
	A ob(0), ob1(1), ob2, ob3;
	ob2= ob&&ob1; //ob.&&(ob1)
	ob3=ob||ob1;
	ob2.show(); //0 and 1 gives 0
	ob3.show(); //0 or 1 gives 1
}
