/*
Chef has an array A of length N. He defines the alternating sum of the array as:

S=|A1|−|A2|+|A3|−|A4|+…(−1)N−1⋅|AN|
Chef is allowed to perform the following operation on the array at most once:

Choose two indices i and j (1≤i<j≤N) and swap the elements Ai and Aj.
Find the maximum alternating sum Chef can achieve by performing the operation at most once.

Note: |X| denotes the absolute value of X. For example, |−4|=4 and |7|=7.
*/

#include <bits/stdc++.h>
#include <cstdlib>

using namespace std;
int main() {
    long long int t,N,temp,pos1=0,pos2=1,sum=0,lol,min, max;
    cin>>t;
    for(int j=0;j<t;j++){
        cin>>N;
        long long int arr[N];
        for(int i=0;i<N;i++){
            cin>>lol;
            arr[i]=abs(lol);
        }
        min=arr[0];
        max=arr[1];
        for(int i=0;i<N;i++){
            if(i%2==0){
                if(min>arr[i]){
                    min=arr[i];
                    pos1=i;
                }
            }
            else{
                if(max<arr[i]){
                    max=arr[i];
                    pos2=i;
                }
            }
        }
        temp=arr[pos1];
        arr[pos1]=arr[pos2];
        arr[pos2] = temp;
        sum=arr[0];
        for(int i=1;i<N;i++){
            if(i%2==0){
                sum+=arr[i];
            }
            else{
                sum-=arr[i];
            }
        }
        cout<<sum<<endl;
    }
	return 0;
}
