#include<iostream>
using namespace std;
class A{
	int a;
	public:
		int input(){
			cin>>a;
		}
		void display(){
			cout<<"Value of a= "<<a<<endl;
		}
};
int main(){
	A *ob,ob1,ob2;  	//It has 2 objects and total 4 data variables in this program.
	ob=&ob1;
	ob1.input();
	ob->display(); 	//arrow is used when pointer is used to point the value to a function
	ob=&ob2;
	ob2.input();
	ob->display();
}
