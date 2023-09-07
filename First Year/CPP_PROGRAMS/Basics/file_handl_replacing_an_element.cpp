#include<iostream>
#include<fstream>
using namespace std;
int main(){
	fstream ob ("abhishek_vohra.txt",ios::out|ios::in);
	char c;
	ob.get(c);
	
	while(!ob.eof()){
		if (c=='a'){
			ob.seekp(-1,ios::cur);
		}
		ob<<"b";
		ob.get(c);
	}
}

