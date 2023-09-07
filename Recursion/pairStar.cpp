// Change in the given string itself. So no need to return or print the changed string.
#include<bits/stdc++.h>
using namespace std;

void pairStar(char input[]) {
  //cout<<input<<endl;
    int l = strlen(input);
    if(input[0]=='\0' || input[1]=='\0'){
        return;
    }
    char a = input[0];
    char b = input[1];
    if(a == b){
        input[l+1]='\0';
       // input[1] = '*';
        for(int i=l;i>2;i--){
            input[i] = input[i-1];
        }
        input[2] = input[1];
        input[1] = '*';
        
    return pairStar(input+2);
        
    }
    return pairStar(input+1);
}