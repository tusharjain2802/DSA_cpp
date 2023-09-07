#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    string S, T, M;
    cin>>t;
    for(int j=0;j<t;j++){
        cin>>S>>T;
        for(int i=0;i<5;i++){
            if(S[i]==T[i]){
                cout<<"G";
            }
            else{
                cout<<"B";
            }
        }
        cout<<endl;
    }
}