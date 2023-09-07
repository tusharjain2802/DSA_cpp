#include<stdio.h>
void reverseArray(int arr[],int start,int end){
	int temp;
	while (start<end)
{
	temp = arr[start];  //temp=1	tepm=2	temp=3
	arr[start]=arr[end];	// arr[0]=6	arr[1]=5	arr[2]=4
	arr[end]=temp;		// arr[5]=1	arr[4]=2	arr[3]=3
	start++;		// start=1	start=2	start=3
	end--;		// end=4	end=3	end=2
}
}
void printArray(int arr[], int size){
	int i;
	for (i=0; i<size;i++)
	printf(" %d ",arr[i]);
	printf("\n");
}
int main() 
{
	int arr[]={1,2,3,4,5,6};
	int n= sizeof(arr)/ sizeof(arr[0]);
	printArray(arr,n);
	reverseArray(arr,0,n-1);		//6,5,4,3,2,1
	printf("Reversed array is \n");
	printArray(arr,n);
	return 0;
}
