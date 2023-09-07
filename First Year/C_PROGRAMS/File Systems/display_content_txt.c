#include<stdio.h>
int main(){ 
FILE *fp;  // file pointer
char ch; 
fp = fopen("mystory.txt", "r");  // file open command statement.
while (1){ 
ch = fgetc (fp) ; 	// get one character from the value
if (ch == EOF) break ; 	// End of File has ASCII value of 26
printf ("%c", ch) ; 
} 
fclose(fp) ; 	// close the file to save.
} 

