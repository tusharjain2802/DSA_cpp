#include<stdio.h>
int main(){
int i,j,k,sum=0;
	float a[2][2], b[2][2], product[2][2];
	printf("Enter the members of the 1st matrix\n");
	for (i=0; i < 2; ++i)
	for (j=0; j<2; j++){
		printf("Enter a%d%d: ",i+1,j+1);
		scanf("%f",&a[i][j]);
}
printf("\n");
	printf("Enter the members of the 2nd matrix\n");
	for ( i=0;i<2;i++)
	for (j=0;j<2;j++){
		printf("Enter a%d%d: ",i+1,j+1);
		scanf("%f",&b[i][j]);
		}
for (i=0;i<2;i++){
	for(j=0;j<2;j++){
		for (k=0;k<2;k++){
			sum += a[i][k] * b[k][j];
		}
		product[i][j] = sum;
		sum = 0;
	}
}
printf ("\nThe Product matrix 'p' is as follows: \n ");
for (i=0;i<2;i++){
	for (j=0;j<2;j++){
		printf("p%d%d=%.2f\t",i,j,product[i][j]);
	}
	printf("\n");
}		
}
