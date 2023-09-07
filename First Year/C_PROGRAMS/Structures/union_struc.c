#include<stdio.h>
int main(){
union emp { 
	int i;
	short int s[2];
 };  // the value of variable in union is affected by the value of rest of the variables.Becuase of the memory allocation.
union emp e ;
e.i=87381;
printf ("int value = %d , short values = %d %d", e.i, e.s[0], e.s[1] ) ; 
// output:
// int value = 87381 , short values = 21845 1
// 87381 = 00000000 00000001 01010101 01010101
//21845 = 01010101 01010101
//1 =  00000000 00000001
}

