#include<stdio.h>
struct book { 
char name[25] ; char author[25] ; int callno ; 
}; 
void display ( struct book b ) { 
printf ( "\n%s %s %d", b.name, b.author, b.callno ) ; 
} 
int main( ) { 
struct book b1 = { "Let us C", "YPK", 101 } ; 
display ( b1 ) ; 
} 

