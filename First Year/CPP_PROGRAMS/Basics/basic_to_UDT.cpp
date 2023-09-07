/*
Basic type is int float and UDT is user defined types which is object
*/
//basic->UDT
#include<iostream>
using namespace std;
class A{
	float c;
	public:
		A(){
			c=0;
		}
		A(float f){
			c=(f-32)*59;
		}
		void show(){
			cout<<c<<" In Celcius"<<endl;
		}
};
int main(){
	A ob(50);
	float f;
	cout<<"Fahrenheit:";
	cin>>f;
	ob=f; //conversion.
//constructor is called twice in conversion
	ob.show();
}
