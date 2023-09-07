/*Same name as the class
No return statement 
Automatically called when object is created
Compiler uses default empty constructor if no constructor is defined
*/
#include<iostream>
using namespace std;
class A{
	public:
		A(){
			cout<<"Constructor A"<<endl;
		}
		~A(){
			cout<<"In Destructor A"<<endl;
		}
};
class B:public A{
	public:
		B(){
			cout<<"Constructor B"<<endl;
		}
		~B(){
			cout<<"Destrucor B"<<endl;
		}
};
int main(){
	B ob;
//constructor acts as an initialiser as a memory automatically gets allocated the the object.
}
