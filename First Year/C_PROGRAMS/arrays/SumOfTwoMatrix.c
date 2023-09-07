#include<stdio.h>
int main(){
	int i,j;
	float a[2][2], b[2][2], result[2][2];
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
printf("\n");
	for (i=0;i<2;i++)
	for (j=0;j<2;j++){
	result[i][j] = a[i][j] + b[i][j];	
}
printf("\n The sum of the matrix is:\n");
	for (i=0;i<2;i++)
	for (j=0;j<2;j++){
		printf("%.1lf\t",result[i][j]);
}	
}
