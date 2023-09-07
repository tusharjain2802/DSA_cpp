#include<stdio.h>
int i;
int linearSearch(int arr[],int n,int num){
for (i=0;i<n;i++){
	if (arr[i] == num){
		printf("Element found at index = %d\n",i);
		return 1;
	}
}
return 0;
}
int main(){
int i,n,result,x;
printf("Enter the number of elements you want to enter in the array:\n");
scanf("%d",&n);	

int arr[n];
printf("Enter the elements here:\n");
for (i=0; i<n;i++){
	scanf("%d",&arr[i]);
}
printf("Enter the number you want to search:\n");
scanf("%d",&x);
result=linearSearch(arr,n,x);
if (result == 0)  printf("Element not found in the array\n");	
}
