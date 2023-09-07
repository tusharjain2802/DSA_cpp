#include<iostream>
#include<fstream>
using namespace std;
int main(){
	fstream ob ("abhishek_vohra.txt",ios::out|ios::in);
	ob<<"I am learning!";
	ob.seekg(-7,ios::end); //20 position from current
	int r=ob.tellp();
	cout<<r;
	ob<<" HH bhfyibwh; jhku;";
	if(!ob)
	cout<<"File doesn't exist";
}

