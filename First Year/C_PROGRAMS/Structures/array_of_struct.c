#include<stdio.h>
int main( ) { 
int i;
struct book { 
char name ; float price ; int pages ; 
};
struct book b[3] ;    //array of struct
printf ("\nEnter names, prices & no. of pages of 3 books\n");
for(i=0;i<3;i++,fflush(stdin)) 
scanf ( "%c %f %d", &b[i].name, &b[i].price, &b[i].pages ) ;
for(i=0;i<3;i++,fflush(stdin)) 
printf( "%c %f %d", b[i].name, b[i].price, b[i].pages ) ;

}

