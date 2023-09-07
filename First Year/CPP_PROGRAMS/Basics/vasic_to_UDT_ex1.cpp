#include<iostream>
using namespace std;
class A{
	int a;
	public:
		A(int g){ //the basic type is passed in the constructor as argument
			cout<<"Parameterized constructor"<<endl;
			cout<<"Enter a";
			cin>>a;
			a=a*6;
		}
		void show(){
			cout<<a;
		}
};
int main(){
	int d=9;
	A ob(5); //call A constructor
	ob=7;  //it will call construcor again with 7
	ob.show();
}
//constructor works twice with the same object which is one of the featur of type conversion
