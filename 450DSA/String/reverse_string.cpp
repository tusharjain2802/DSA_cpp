#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void reverseString(vector<char>& s) {
        int n = s.size();
        for(int i=0;i<n/2;i++){
            swap(s[i], s[n-i-1]);
        }
    }
};

int main(){
    Solution ob;
    vector<char> s ;
    s.push_back('h');
    s.push_back('e');
    s.push_back('l');
    s.push_back('l');
    s.push_back('o');
    ob.reverseString(s);
}