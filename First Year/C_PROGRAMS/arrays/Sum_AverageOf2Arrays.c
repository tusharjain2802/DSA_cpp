#include<stdio.h>
int main(){
int n,i,sum=0;
double avg;
printf("Enter the number of elements is the array:\n");
scanf("%d",&n);
int arr[n];
printf("Enter the elements of array:\n");
for (i=0;i<n;i++){
	scanf("%d",&arr[i]);
}
for (i=0;i<n;i++){
	sum+=arr[i];
}
printf("The sum of the elements of the array is %d\n",sum);
avg= (float) sum/n;
printf("The average of the entered numbers is %.2f",avg);
return 0;
}

