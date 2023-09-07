#include<bits/stdc++.h>
using namespace std;


bool odd(char input[], int l, int i=0){
    if((l-1)<i){
        return true;
    }
    if(input[i] != input[l-1]) return false;
    return odd(input, l-1, i+1);
} 

bool checkPalindrome(char input[]) {
    int l = strlen(input);
	return odd(input,l);
}

int main(){
    char input[] = "heeh";
    cout<< checkPalindrome(input)<<endl;
}