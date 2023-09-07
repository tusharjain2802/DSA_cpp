#include<stdio.h>
int main(){ 
FILE *fp ; char s[80] ; 
fp = fopen ( "POEM.txt","r") ; 
while ( fgets ( s, 79, fp ) != NULL ) 
printf ( "%s" , s ) ; 
fclose (fp) ; 
} 

