#include<iostream>
using namespace std;
int sum(int a, int b){
	return a+b;
}
int main(){
	int x;
	float y;
	/*cout << "Enter x\n";
	cin>>x;
	cout << "Enter y\n";
	cin>>y;
	cout<<x;
	cout<<y;
	*/
	//another method
	cout<<"Enter value of x and y:\n";
	cin>>x>>y;
	cout<<"Values of x and y\n"<<x<<endl<<y;	//endl can be used in place of \n for next line command
	cout<<"\nThe sum of x and y is "<<sum(x,y);
}
