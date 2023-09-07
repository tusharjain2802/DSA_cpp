#include<fstream>
using namespace std;
#include<iostream>
int main(){
	ifstream ob;
	//to read file
	ob.open("file_handling.txt");
	char c[100];
	while(!ob.eof()){
	ob.getline(c,100);
	cout<<c;
	cout<<endl;
}
}
