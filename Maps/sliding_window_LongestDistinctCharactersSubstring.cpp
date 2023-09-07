// https://practice.geeksforgeeks.org/problems/longest-distinct-characters-in-string5848/1

#include<bits/stdc++.h>
using namespace std;
int longestSubstrDistinctChars (string S);
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string S; cin >> S;

        cout << longestSubstrDistinctChars (S) << endl;
    }
}
// } Driver Code Ends


int longestSubstrDistinctChars (string s)
{
    int num=0;
    int l=0, r=0;
    map<int, int> m;
    for(int i=0;i<s.size();i++){
        r=i;
        if(m.find(s[i])==m.end() || m[s[i]]<l) {
            num = max(num, r-l+1);
        }else{
            l = m[s[i]]+1;
        }
        m[s[i]]=i;
    }
    return num;
}