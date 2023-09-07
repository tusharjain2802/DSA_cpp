#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    int N,R,count=0,i;
    for(int i=0;i<t;i++){
        cin>>N>>R;
        int A[N],B[N],C[N];
        for (i = 0; i < N; i++)
        {
            cin>>A[i];
        }
        for (i = 0; i < N; i++)
        {
            cin>>B[i];
        }
        for (i = 0; i < N; i++)
        {
            C[i]=A[i]-B[i];
        }
        sort(C, C + N);
        i=0;
        while(R>0 && i<=N)
        {
            count+=R/C[i];
            R=R%C[i];
            i++;
        }
        cout<<count<<endl;
    }
}