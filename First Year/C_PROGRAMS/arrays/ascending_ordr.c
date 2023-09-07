#include<stdio.h>
int main(){
int i,k=0,n1,n2,temp;

printf("Enter the number of elements is the first array:\n");
scanf("%d",&n1);

int arr1[n1];

printf("Enter the elements of first array:\n");
for (i=0;i<n1;i++){
	scanf("%d",&arr1[i]);
}

printf("Enter the number of elements is the second array:\n");

scanf("%d",&n2);
int arr2[n2],arr3[n1+n2];

printf("Enter the elements of second array:\n");
for (i=0;i<n2;i++){
	scanf("%d",&arr2[i]);
}
for ( i=0; i<n1+n2; i++){
	if (i>n1-1){
		arr3[i]=arr2[k];
		k++;
	}
    else arr3[i]=arr1[i];
}

for ( k=0; k<n1+n2; k++) {
for (i=k+1;i<n1+n2 ;i++){
	if (arr3[i] < arr3[k]){
		temp = arr3[k]; 
	    arr3[k] = arr3[i];  
	    arr3[i]= temp; 
         }
}
}
printf("The merged resultant array in ascending order is as follows:\n");
for (i=0;i<n1+n2;i++)
printf("%d\n",arr3[i]);
}
