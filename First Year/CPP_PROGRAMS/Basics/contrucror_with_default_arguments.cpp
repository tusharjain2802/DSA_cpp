#include<iostream>
using namespace std;
class A{
	public:
		A(int a=223, int b=11, int c=9){
			cout<<a<<" "<<b<<" "<<c<<endl;
		}
};
int main(){
	A ob(5);
}
