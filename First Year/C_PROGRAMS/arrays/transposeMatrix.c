#include<stdio.h>
int main(){
int i,j;
float a[2][2],transpose[2][2];
	printf("Enter the members of the matrix\n");
	for (i=0; i < 2; ++i){
	for (j=0; j<2; j++){
		printf("Enter a%d%d: ",i+1,j+1);
		scanf("%f",&a[i][j]);
}
}
printf("The entered array is :\n");
for (i=0; i < 2; ++i){
	for (j=0; j<2; j++){
		printf(" %.1f ",a[i][j]);
}
printf("\n");
}
printf("The transpose array is :\n");
for (i=0; i < 2; ++i){
	for (j=0; j<2; j++){
		printf(" %.1f ",a[j][i]);
}
printf("\n");
}
}
