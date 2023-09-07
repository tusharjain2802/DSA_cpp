#include<stdio.h>
int main(int argc, char *argv[20]){
int i;
for(i=0;i<argc;i++) printf("\n argv[%d] = %s ",i,argv[i]);
return 0;
}
