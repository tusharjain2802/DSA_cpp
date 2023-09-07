/*#include<stdio.h>
int main(){
int A[]={11,23,98,9,0},i;
for (i=0;i<5;i++)
printf("value = %d address= %d\n",A[i],&A[i]);	
}
*/
#include<stdio.h>
int main(){
int A[3][2]={{2,3},{2,5},{4,7}};
int i,j;
for (i=0;i<3;i++){
	for (j=0;i<2;j++){
		printf("value = %d address= %d\n",A[i][j],&A[i][j]);
    }
    }	
}
// program to calculate adress of any member of an array.
// adress plot of the members will have an formula
// i.e. base adress+4*(no. of members)-1


