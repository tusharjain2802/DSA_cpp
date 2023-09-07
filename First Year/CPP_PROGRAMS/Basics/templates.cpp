#include<iostream>
using namespace std;
template <class T1, class T2>
//Can create a single function or a class to work with different data types using templates.
void show(T1 a, T2 d){
	cout<<a<<" "<<d<<endl;
}
int main(){
	show(2,9);
	show('y',7.8);
	show('c','d');
}
/*
Two types of templates-
Function templates
class templates
*/
