#include<bits/stdc++.h>
using namespace std;

int main(){
    unordered_set<string> s;
    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        string str;
        cin>>str;
        s.insert(str);
    }
    cout<<"Enter number of strings and string you want to search"<<endl;
    int q;
    cin>>q;
    while(q--){
        string str;
        cin>>str;
        if(s.find(str) == s.end()){  // the find will return end when there is no value present
            cout<<"No"<<endl;
        }
        else{
            cout<<"Yes"<<endl;
        }
    }
    
}

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
// 3
// ghj
// abc
// sbayd