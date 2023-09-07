#include<bits/stdc++.h>
using namespace std;

void print(set<string> &s){
    for(auto it = s.begin(); it!=s.end();++it){
        cout<<(*it) <<endl;
    }
    set<int> s1;
    s1.insert(12343);
    cout<<"Second Method"<<endl;
    for(auto value:s1){
        cout<<value <<endl;
    }
}

int main(){
    set<string> s;
    s.insert("abc"); //Olog(n)
    s.insert("hbd");
    s.insert("jbf");
    s.insert("abc"); // it inserts every value one time
    auto it = s.find("abc");  //Olog(n)
    if(it!=s.end()){ //to prevent error when no element found bt the iterator
    cout<<"Found Value: "<<(*it)<<endl;
   
    }
    print(s);
}
// multisets allow duplicates
// multiset<int> ms;