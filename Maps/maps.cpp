#include<bits/stdc++.h>
using namespace std;
void print(unordered_map<int, string> m){
    unordered_map<int, string>::iterator it= m.begin();
    while(it!= m.end()){
        cout<<"key: "<<it->first<<" Value: "<<it->second<<endl;
        it++;
    }
}

int main(){
    unordered_map<int, string> m;
    m[1] = "abc"; //Olog(n)
    m[2] = "hbd";
    m[4] = "jbf";
    m[5] = "gda";
    m[6] = "aeg";
    m[7] = "gbd";
    cout<<m.size()<<endl;
    print(m);
    unordered_map<int, string>::iterator it2 = m.find(1);
    //m.erase(it2); 
    //You can pass the key or the iterator in the erase function.
    m.erase(it2);
    cout<<"After Erasing"<<endl;
    print(m);
}