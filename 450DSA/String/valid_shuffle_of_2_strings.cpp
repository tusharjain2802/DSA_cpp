#include<bits/stdc++.h>
using namespace std;

bool solve(){
    string s1,s2,res;
    cin>>s1>>s2>>res;
    int l1= s1.length();
    int l2= s2.length();
    int l3= res.length();
    if(l1+l2!=l3){
        return false;
    }
    else{
        int a=0,b=0,c=0;
        while(c<l3){
            if(s1[a] == res[c]){
                a++;
            }                                                                                                                                                                                                                                                                                                           
            else if(s2[b] == res[c]){
                b++;
            }
            else{
                break;
            }
            c++;
        }
        if(a<l1 || b<l2){
        return false;
    }
    else{
        return true;
    }
    }
    
}
// The resultant strings should contain both the strings fully and also in sasme order.

int main(){
    bool a = solve();
    if(a){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
}

// xy
// 12
// x1y2
// Output: Yes
