#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,N, X, temp,correct_q, left, negative, zero;
    cin>>t;
    for(int j=0;j<t;j++){
        cin>>N>>X;
        if((N*3)<X){
            cout<<"No"<<endl;
        }
        else{
            correct_q = X/3;
            if(X%3!=0){
            correct_q+=1;
            }
            negative = (correct_q*3) - X;
            left = N - correct_q ;
            zero= N- correct_q- negative;
            if(negative > left){
                cout<<"No"<<endl;
            }
            else{
                cout<<"Yes"<<endl;
                zero = N - correct_q - negative ;
                cout<<correct_q<<" "<<negative<<" "<<zero<<endl;
            }
        }
    }
}