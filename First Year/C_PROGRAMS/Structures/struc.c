#include<stdio.h>
int main( ) { 
struct book { 
char name ; float price ; int pages ; 
};
struct book b1 ; 

printf ( "\nEnter names, prices & pages of the book\n" ) ; 
scanf ( "%c %f %d", &b1.name, &b1.price, &b1.pages ) ; 
printf ( "\nAnd this is what you entered" ) ;
printf ( "\n%c %f %d", b1.name, b1.price, b1.pages ) ; }

