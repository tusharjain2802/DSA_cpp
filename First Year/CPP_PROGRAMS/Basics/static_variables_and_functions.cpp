/*static variables and functions.
Whenever an object is created its default value is set to zero.
static is used in case of initialising value of variable before creating an object and shared by all the objects.
*/
#include<iostream>
using namespace std;
class A{
	static int a;
	public:
		static void initialize_a(){
			a=67;
		}
		void input(){  //function called two times using ob1 and ob2 so a=67+1+1
			a++;
		}
		void display(){
			cout<<"Value of a= "<<a<<endl;
		}
};
int A::a; 		//static needs to be defined outside the class.
int main(){
	A::initialize_a();		//class_name::function_name -> to call a function.
	A ob1, ob2;
	ob1.input();
	ob2.input();
	ob1.display();
	ob2.display();
}
