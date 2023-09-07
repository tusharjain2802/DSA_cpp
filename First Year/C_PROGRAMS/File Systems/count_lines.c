#include<stdio.h>
int main(){ 
FILE *fp ;
char ch ;
int nol = 0;
fp = fopen ( "mystory.txt", "r" ) ; 
while (1) {
ch = fgetc ( fp );  
if ( ch == EOF ) 
break;  
if( ch == '\n' ) nol++;
} 
fclose ( fp ) ; 
printf ( "\nNumber of lines = %d",nol); 
} 

