#include<iostream>
using namespace std;
class A{
	int a,b;
	public:
		void init(int x, int y){
			a=x;
			b=y;
		}
		friend A operator ++(A ob);
		void operator ++(int v){ //fake argument so that it can run with post increment too.
			++a;
			++b;
		}
		void display(){
			cout<<a<<" "<<b;
		}
};
A operator ++(A ob){
	ob.a=++ob.a;
	ob.b=++ob.b;
	return ob;
}
/*
pe and post increment are unary operators.(++)
*/
int main(){
	A ob,ob1;
	ob.init(8,10);
	ob1.init(8,10);
	//++ob;
	ob++;
	ob1=++ob1;
	ob.display();
	ob1.display();
}

