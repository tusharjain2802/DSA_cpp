#include<stdio.h>
int main( ) { 
struct employee { char name[10] ; int age ;float salary ; };
struct employee e1 = { "Sanjay", 30, 5500.50 } ,e2,e3;
strcpy ( e2.name, e1.name ) ; // strings cannot be copied with simple assignment '=' operator
e2.age = e1.age ; 
e2.salary = e1.salary ; 
e3 = e2 ; // copying two structures
printf ( "\n%s %d %f", e1.name, e1.age, e1.salary ) ; 
printf ( "\n%s %d %f", e2.name, e2.age, e2.salary ) ; 
printf ( "\n%s %d %f", e3.name, e3.age, e3.salary ) ; 
} 

