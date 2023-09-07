#include<iostream>
using namespace std;
/*
void display(int s[]){
	for (int i=0;i<5;i++) cout<<s[i]<<" ";
}
*/
int main(){
	int a[5]={1,2,3,4,5};
	//display(a);
	//OR
	//display(&a[0]);  //passing the address of first element passes the whole array
	//Now printing using pointers
	for(int i=0;i<5;i++){
		cout<<*(a+i);  //Here on adding 1 to the number the address gets changed by 4.
	}
}
