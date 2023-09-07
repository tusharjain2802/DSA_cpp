
#include <stdio.h> 
RoatateByOne(int arr[],int n){
int i,temp;
temp = arr[0];
for (i=0;i<n;i++){
	arr[i] = arr[i+1];
}
arr[n-1] = temp;	
}
RoatateByD(int arr[],int n, int d){
int i;
for (i=0;i<d;i++)
RoatateByOne(arr, n);	
}
int main(){
int i,d;	
int arr[]={12,34,76,90,9,8,-12,82};
printf("The array is:\n");
for (i=0;i<8;i++){
printf(" %d ",arr[i]);
}
printf("\n");
printf("Enter the value by which you want to rotate the array.\n");	
scanf("%d",&d);
RoatateByD(arr,8,d);
printf("The array after rotation is:\n");
for (i=0;i<8;i++){
printf(" %d ",arr[i]);	
}	
}

