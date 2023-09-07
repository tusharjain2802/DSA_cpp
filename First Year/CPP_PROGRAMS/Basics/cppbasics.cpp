#include <iostream>
using namespace std;
  //cout<<"Hello World";
namespace a{
void f(){
cout<<"hi";}}
namespace b{
void f(){
cout<<"hello";}}
int main (){
//using namespace a;
//b::
b::f();
return 8;
}
