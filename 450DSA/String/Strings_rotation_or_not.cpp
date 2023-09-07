#include<bits/stdc++.h>
using namespace std;

bool solve(){
    string s1,s2;
    cin>>s1>>s2;
    int l1= s1.length();
    int l2= s2.length();
    if(l1!=l2){
        return false;
    }   
    else{
        sort(s1.begin(), s1.end());
        sort(s2.begin(), s2.end());
        for (int i = 0; i < l1; i++)
        {
            if(s1[i] != s2[i]){
                return false;
            }
        }
        return true;
        
    }
}

int main(){
    bool a= solve();
    if(a){
        cout<<"The string are roation of each other"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
}