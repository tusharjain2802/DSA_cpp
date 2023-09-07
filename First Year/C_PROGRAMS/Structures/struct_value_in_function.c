#include<stdio.h>
void display ( char *s, char *t, int n ){ 
printf ( "\n%s %s %d", s, t, n ) ; 
} 

int main(){ 
struct book { char name[25] ; char author[25] ; int callno ; };
struct book b1 = { "Let us C", "YPK", 101 } ; 
display ( b1.name, b1.author, b1.callno ) ; 
} 

