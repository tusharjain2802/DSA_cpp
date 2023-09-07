#include<stdio.h>
int removeDup(int arr[] ,int n){
int i, j,k=0;
printf("\nThe Array after removing duplicates is as follows:\n");
for (i=0;i<n;i++){
	for (j=i+1;j<n;j++){
		if (arr[i] == arr[j]){
		for (k=j;k<n;k++){
			arr[k]=arr[k+1];
		}
	n--;	
	}
	else j++;
	}
}
for (i=0;i<n-1;i++){
printf(" %d, ",arr[i]);	
}
}
int main(){
int m,n,i;
int arr[] = {29, 13, 4, 1, 5, 6, 6, 9, 11, 13, 1, 4}; 
printf("The Original Array is \n");
m = sizeof(arr) / sizeof(int); 
for (i=0;i<m;i++){
	printf(" %d, ",arr[i]);
}
removeDup(arr,m);
return 0;
}
