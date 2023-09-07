#include<iostream>
using namespace std;
//if we remove namespace compilation will not take place and only preprocessing is done.
int main(){
std::cout<<"Hello";
// std is scope resolution and will import cout without using namespace, code will run even after removing namespace std;
 return 0;
}

