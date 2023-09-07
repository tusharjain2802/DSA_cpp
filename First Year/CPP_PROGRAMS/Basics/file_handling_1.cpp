#include<iostream>
#include<fstream>
using namespace std;
int main(){
	fstream ob ("abhishek_vohra.txt",ios::out|ios::ate);
	ob<<"OOP instructor";
	if(!ob)
	cout<<"File doesn't exist";
}

