#include<stdio.h>
int unionProg(int arr1[], int arr2[],int m, int n){
int i=0, j=0;
printf("The union array is as follows:\n");
while (i<m && j<n){
	if (arr1[i] < arr2[j]){
		printf(" %d ",arr1[i]);
		i++;
	}
	else if (arr2[j] < arr1[i]){
			printf("%d",arr2[j]);
			j++;
	}
	else {			// arr1[i]=arr2[j]
		printf(" %d ",arr2[j]);
		i++;
		j++;
	}
    }
// Print remaining elements of the array
while (i<m){
	printf(" %d ",arr1[i]);
	i++;
}	
while (j<n){
	printf(" %d ",arr2[j]);
	j++;
}	
}
int intProg(int arr1[], int arr2[],int m, int n){
int i=0, j=0,k;
printf("\nThe intersection array is as follows:\n");
while (i<m && j<n){
	if (arr1[i] < arr2[j]){
		i++;
	}
	else if (arr2[j] < arr1[i]){
			j++;
	}
	else  /*(arr1[i]=arr2[j])*/{			
		printf(" %d ",arr2[j]);
		k++;
		i++;
		j++;
	}
    }
if (k=0) printf("There is no element in the intersection array\n");    
	
}
int main(){
int m,n;
int arr1[] = { 1, 2, 4, 5, 6 ,9,11,13}; 
int arr2[] = { 2, 3, 5, 7, 10, 13, 14}; 
m = sizeof(arr1) / sizeof(int); 
n = sizeof(arr2) / sizeof(int);
unionProg(arr1,arr2,m,n);
intProg(arr1,arr2,m,n);
return 0;
}
