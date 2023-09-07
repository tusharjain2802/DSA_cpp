#include<stdio.h>
#include<string.h>
int main( ){ 
FILE *fp ; char s[80] ; 
fp = fopen ( "POEM.TXT", "w" ); 
printf ("\nEnter a few lines of text:\n"); 
while (strlen(gets(s))>0){
fputs (s,fp);
fputs("\n", fp); 
} 
fclose(fp); 
} 

