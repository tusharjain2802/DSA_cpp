#include<iostream>
using namespace std;
class A{
	int a;
	public:
		A(int a){
			cout<<"constructor"<<endl;
			this->a=a;
			this->a++;
		}
		void show(){
			cout<<"value of a= "<<a<<endl;
		}
		~A(){
			cout<<"Destructor"<<endl;
		}
};
void fn(){
	static A ob(7); // to make the scope throughout the program.
	//destructor will rend after the end of the program bcoz of static its scope increases throughout the program
	ob.show();
}
int main(){
	fn();
	//fn();
	cout<<"End of program"<<endl;
}
