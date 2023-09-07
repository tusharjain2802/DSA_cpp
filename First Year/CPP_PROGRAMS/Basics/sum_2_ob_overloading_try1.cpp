#include<iostream>
using namespace std;
class A{
	int a;
	public:
		void init(int z){
			a=z;
		}
		void operator + (A ob){
			a=a+ob.a;
		}
		void operator + (int n){
			a=a+n;
		}
		void display(){
			cout<<a<<endl;
		}
		friend void operator +(int, A &);
};
void operator+(int z, A &ob){
	ob.a=z+ob.a;
	//return ob;
}
int main(){
	A ob,ob1;
	ob.init(9);
	ob1.init(11);
	ob+ob1;ob.display();
	67+ob1;
	//67+ob1 is not possible as it will call the overloaded function
	//so we use friend function.
	ob1.display();
}
