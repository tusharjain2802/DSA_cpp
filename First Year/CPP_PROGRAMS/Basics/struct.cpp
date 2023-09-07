#include<iostream>
using namespace std;
struct Person{ int age;
};
int main(){
	Person p1;   	//No need to write struct person p1 in c++.
	cout << "Enter age:";
	cin>>p1.age;
	cout<< "Age:" << p1.age <<endl;
	return 0;
	//We can define functions inside structures in C++ but not in C.
}
