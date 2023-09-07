#include<stdio.h>
int main( ){ 
FILE *fs, *ft ; 
char ch ; 
fs = fopen ("mystory.txt","r") ;   // read mode
ft = fopen ("destination.txt","w") ;  // write mode
while (1){ 
ch = fgetc (fs) ; 
if (ch==EOF) break ; 
else fputc (ch, ft) ;  // put character
}
fclose (fs) ; 
fclose (ft) ; 
return 0;
} 

