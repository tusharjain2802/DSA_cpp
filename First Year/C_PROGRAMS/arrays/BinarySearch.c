#include<stdio.h>
int binarySearch(int arr[],int l, int r, int searchEle){
if (r>=l){
	int mid= (r+l) / 2;
	if (arr[mid] == searchEle)
	return mid;
	
	if (arr[mid] > searchEle )
	return binarySearch(arr,l, mid-1,searchEle);
	
	else return binarySearch(arr,mid+1,r,searchEle);
}
	return 1;
}
int main(){
int n,i,size, element,result;	
printf("Enter the number of elements you want to enter in the array:\n");
scanf("%d",&n);	

int arr[n];
printf("Enter the elements here:\n");
for (i=0; i<n;i++){
	scanf("%d",&arr[i]);
}

size = sizeof(arr)/ sizeof(arr[0]);	
printf("Enter the number you want to search in the array:\n");
scanf("%d",&element);

result= binarySearch(arr,0,size-1,element);
if (result ==1 ) printf("Element is not present in the array:\n");
else printf("The element is present at index = %d",result);
return 0;
}
