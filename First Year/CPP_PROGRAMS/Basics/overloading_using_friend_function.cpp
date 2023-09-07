#include<iostream>
using namespace std;
class A{
	int a;
	public:
		A(int z){
			a=z;
		}
	friend void operator -(A & ob);
	void show(){
		cout<<a<<endl;
	}
};
void operator -(A & ob){
	ob.a=-ob.a;
}
int main(){
	A ob(19);
	-ob;
	ob.show();
}
