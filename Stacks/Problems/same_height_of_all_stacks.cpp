#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int> st1,st2,st3;
    int maxheight;
    int n1,n2,n3,h1=0,h2=0,h3=0;
    cin>>n1>>n2>>n3;
    int ar1[n1],ar2[n2],ar3[n3];
    for (int i=0; i<n1; i++) {
        cin>>ar1[i];
    }
    for (int i=n1-1; i>=0; i--){
        h1+=ar1[i];
        st1.push(h1);
    }
    for (int i=0; i<n2; i++) {
        cin>>ar2[i];
    }
    for (int i=n2-1; i>=0; i--){
        h2+=ar2[i];
        st2.push(h2);
    }
    for (int i=0; i<n3; i++) {
        cin>>ar3[i];
    }
    for (int i=n3-1; i>=0; i--){
        h3+=ar3[i];
        st3.push(h3);
    }
    
    while(!st1.empty() && !st2.empty() && !st3.empty()){
        h1=st1.top();
        h2=st2.top();
        h3=st3.top();
        if(h1== h2 && h1==h3){
            maxheight=st1.top();
            break;
        }
        if (h1>=h2 && h1>=h3) {
        st1.pop();
        }
        else if (h2>=h1 && h2>=h3) {
        st2.pop();
        }
        else if (h3>=h1 && h3>=h2) {
        st3.pop();
        }
    }
    cout<<maxheight;
}

