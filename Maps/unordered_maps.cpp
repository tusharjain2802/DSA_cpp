#include<bits/stdc++.h>
using namespace std;

int main(){
    unordered_map<string,int> m;
    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin>>s;
        m[s]++;
    }
    cout<<"Enter number of strings and string you want to search"<<endl;
    int q;
    cin>>q;
    while(q--){
        string s;
        cin>>s;
        cout<<m[s]<<endl;
    }
    
}
//unordered maps use less time complexity for insertion finding O(long(n))
// Input:
// 8
// abc
// def
// abc
// ghj
// jkl
// ghj
// ghj
// abc
// 2
// ghj