#include<stdio.h>
void ShowArray(int a[3], int n);
int main(){
int A[]={11,22,33};
ShowArray(A,3);	
ShowArray(A,3);	
}
void ShowArray(int a[3],int n){
int i;
for(i=0;i<n;i++){
	printf(" %d ",a[i]);
	a[i] *=10;
}	
}
