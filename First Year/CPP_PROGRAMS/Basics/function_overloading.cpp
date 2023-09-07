#include<iostream>
using namespace std;
void overload(int a, int b){
	cout<<"Two integer parameters"<<endl;
}
/*void overload(int y){
	cout<<"One integer parameter"<<endl;
}
*/
void overload(char y){				//on using char it displays ASCII value of the integer.
	cout<<"One double parameter "<<y<<endl;
}
void overload(int y, double z){
	cout<<"One integer and one double parameter"<<endl;
}
int main(){
	overload(5);			//one integer func is commented so any function with one parameter will run
	overload(5,8.9);
}
//compile time polimorphism
//early binding
