#include<stdio.h>
#include<stdlib.h>
void reverse(int* arr,int size)
	{
		int temp;	  // 1 2 3 4 5 
		int i,j=size; // 0 1 2 3 4 
		
		for((i=0,j=size-1);(i<j);(i++,j--))
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j]=temp;
			}	
	}
void display(int* arr,int size)
{
	int i;
		for(i=0;i<size;i++)
			{
				printf("%d ",arr[i]);
			}
}
int main()
{	
int n;
printf("Enter size of array: ");
scanf("%d",&n);
int arr[n];
printf("Enter elements of array:\n");
for(int i=0;i<n;i++)
{
	scanf("%d",&arr[i]);
}

reverse(arr,n);
printf("\nArray after reversing:\n");
display(arr,n);
return 0;
}
