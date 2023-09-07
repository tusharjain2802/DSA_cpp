#include<stdio.h>
int main(){
struct book { 
char name[10] ; 
float price ;
int pages ; 
};
struct book b1 = { "Basic", 130.00, 550 } ; 
struct book b2 = b1; 
printf( "%s %f %d", b2.name, b2.price, b2.pages );
}
