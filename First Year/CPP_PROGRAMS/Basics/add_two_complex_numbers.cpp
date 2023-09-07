#include<iostream>
using namespace std;
class A{
	
	float real,imag;
	
	public:
		void input(){
			cin>>real;
			cin>>imag;
		}
		A sum(A ob3,A ob4)
		{ 
		   A ob5;
		   ob5.real=ob3.real+ob4.real;
		   ob5.imag=ob3.imag+ob4.imag;
		   return ob5;
		}
		float retReal(){
			return real;
		}
		float retImag(){
			return imag;
		}
		
}ob1,ob2;
// returntype classname :: function_name (parameters)
//for defining a function outside the class.

int main(){
	A ob3;
	cout<<"Enter real and Imaginary part of first number:\n";
	ob1.input();
	cout<<"Enter real and Imaginary part of second number:\n";
	ob2.input();
	ob3=ob1.sum(ob1,ob2);
	cout<<"sum is "<<ob3.retReal()<<" +"<<ob3.retImag()<<"i",,endl;
}
