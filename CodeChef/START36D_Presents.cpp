#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    int N;
    for(int i=0;i<t;i++){
        cin>>N;
        cout<<N-(N/5)<<endl;
    }
}