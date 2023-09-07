#include<bits/stdc++.h>
using namespace std;
int countZeros(int n) {
    // Write your code here
    //int ans=0;
    if(n==0) return 1;
    if(n>=1 && n<10) return 0;
    int ans=countZeros(n/10);
	if(n%10==0) {
        return 1+ans;
    }
    else {
        return ans;
    }
}

int main(){
    cout<<countZeros(1203018)<<endl;
}