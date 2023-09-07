#include<fstream>
using namespace std;
#include<iostream>

int main(){
/*	ofstream ob("file_handling.txt"); //constructor method
	ob<<" This is c++ lecture"<<endl<<"File Handling";
*/
	ofstream ob;
	//open file method 
	ob.open("file_handling.txt");
	ob<<"I have opened the existing file and overwrite this file"<<endl<<"File Handling";
	ob.close();
}
