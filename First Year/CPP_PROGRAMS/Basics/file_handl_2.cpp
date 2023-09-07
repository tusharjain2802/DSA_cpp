#include<iostream>
#include<fstream>
using namespace std;
int main(){
	fstream ob ("abhishek_vohra.txt",ios::out|ios::in);
	ob.seekg(20,ios::cur); //20 position from current
	ob<<"C++ is Easy";
	if(!ob)
	cout<<"File doesn't exist";
}

