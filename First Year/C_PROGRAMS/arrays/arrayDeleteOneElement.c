#include <stdio.h>
#include<stdio.h>
int main(){
	int arr[100],c,n,position;
	printf("Enter the numbers of elements in the array:\n");
	scanf("%d",&n);
	printf("Enter the value of numbers in the array:\n");
	for (c=0;c<n;c++){
		scanf("%d",&arr[c]);
	}
	printf("Enter the position of the number to be deleted:\n");
	scanf("%d",&position);
   for (c = position-1; c < n-1 ; c++)
      arr[c] = arr[c+1];
printf("The resultant array is:\n");
   for (c = 0; c <= n-2; c++)
      printf("%d\n", arr[c]);
 
   return 0;
}
