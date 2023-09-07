#include<stdio.h>
int main(){ 
FILE *fs, *ft ; int ch ; 				//binary file is any file other than txt file
fs = fopen ("jacksmith.jpg","rb"); //read binary
ft = fopen ("newIMG.jpg","wb");   // write binary
while(1){ 
ch=fgetc(fs); 
if ( ch == EOF ) 
break; 
else fputc(ch,ft); 
} 
fclose ( fs ) ;  fclose ( ft ) ;
 } 

