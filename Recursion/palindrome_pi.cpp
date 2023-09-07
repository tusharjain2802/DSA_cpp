// Change in the given string itself. So no need to return or print anything
#include<bits/stdc++.h>

void replacePi(char input[]) {
    if(strlen(input) <2){
        return;
    }
	if(input[0] == 'p' && input[1]=='i'){
        input[0] = '3';
        input[1] = '.';
        for(int i= strlen(input);i>1;i--){
            input[i+2] = input[i];
        }
        input[2]= '1';
        input[3] = '4';        
    }
    replacePi(input+1);
}