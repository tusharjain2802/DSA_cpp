#include<iostream>
using namespace std;
class B;
class A{
	friend class B;
	void fn(){
		B *ob;
	}
};
class B{
};
int main(){
	A ob;
}
