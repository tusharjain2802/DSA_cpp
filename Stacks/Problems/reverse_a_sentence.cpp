#include<iostream>
#include<stack>
#include<string>
using namespace std;

void reverse_sentence(string s){
    stack<string> st;

    for(int i=0;i<s.length();i++){
        string word="";
        while(s[i]!=' ' && i<s.length()){
            word+=s[i];
            i++;
    }
    st.push(word);
    }
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
}
int main(){
    string s;
    getline(cin,s);
    reverse_sentence(s);
}