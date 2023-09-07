#include<stdio.h>
int main(){
int i,k=0,n,temp,b[20]={0},c=1,max=0,sum=0,mode=0,j;
float mean,median;
printf("Enter the number of elements is the array:\n");
scanf("%d",&n);
int arr[n];
printf("Enter the elements of first array:\n");
for (i=0;i<n;i++){
	scanf("%d",&arr[i]);
}
for ( k=0; k<n; k++) {
for (i=k+1;i<n;i++){
	if (arr[i] < arr[k]){
		temp = arr[k]; 
	    arr[k] = arr[i];  
	    arr[i]= temp; 
         }
}
}
printf("The resultant array in ascending order is as follows:\n");
for (i=0;i<n;i++)
printf("%d\n",arr[i]);
for (i=0;i<n;i++){
	sum+=arr[i];
}
mean= (float) sum/n;
printf("The mean of the entered numbers is %.2f\n",mean);
if (n%2==0)
median= (float)(arr[n/2]+arr[(n-2)/2])/2;
else 
median = (float) (arr[(n-1)/2]);
printf("The median of the entered numbers is %.2f\n",median);
for(i=0;i<n-1;i++){
for(j=i+1;j<n;j++){
if(arr[i]==arr[j])
{
mode++;
}
}
if((mode>max)&&(mode!=0)){
k=0;
max=mode;
b[k]=arr[i];
k++;
}
else if(mode==max){
b[k]=arr[i];
k++;
}
}
for(i=0;i<n;i++){
if(arr[i]==b[i])
c++;
}
if(c==n)
printf("\nThere is no mode");
else{
printf("\nMode\t= ");
for(i=0;i<k;i++)
printf("%d ",b[i]);
}
return 0;
}

