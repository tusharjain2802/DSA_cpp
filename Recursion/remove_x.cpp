// Change in the given string itself. So no need to return or print anything
#include<bits/stdc++.h>
void removeX(char input[]) {
    if(input[0] == '\0'){
        return;
    }
    if(input[0] == 'x'){
        for(int i=0;i<strlen(input)-1;i++){
            input[i] = input[i+1]; 
        }
        input[strlen(input)-1] = '\0';
    }
    if(input[0]!='x') removeX(input+1);
    else removeX(input);
}