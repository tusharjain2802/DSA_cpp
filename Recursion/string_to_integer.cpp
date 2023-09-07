#include<bits/stdc++.h>
using namespace std;
int ans(char input[], int len, int &num){
    if(len ==0){
        return num;
    }

    num*=10;
    num+= input[0] - '0';
    return ans(input+1, len-1, num);
}
int stringToNumber(char input[]) {
    int l = strlen(input);
    //return 
    int num=0;
	ans(input, l, num);
	return num;
}