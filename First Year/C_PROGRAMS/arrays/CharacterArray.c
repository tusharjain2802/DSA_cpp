/*  
#include<stdio.h>
int main(){
char a[30];
printf("Enter the string:\n");
scanf("%s",a);
printf("You have entered = %s",a);	
}
*/
/* 
#include<stdio.h>
int main(){
char a[30];
printf("Enter the string:\n");
scanf("%s",a);   //limitation of scanf that it donot input elements after a blank space
printf("You have entered = %s",a);	
}
*/
/* 
#include<stdio.h>
int main(){
char a[30];
printf("Enter the string:\n");
scanf("%[^\n]s",a);   //[^\n] donot brakes string after spaces and breaks it after new line
printf("You have entered = %s\n",a);
fflush(stdin); //flush out the input screen so that new elements can be stored in the same array
printf("Enter the string:\n");
scanf("%[^\n]s",a);
printf("You have entered = %s\n",a);
}
*/
