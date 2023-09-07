#include <iostream>
#include <stack>
#include <math.h>
using namespace std;

int prec(char c)
{
    if(c=='^')
    {
        return 3;
    }
    else if(c=='*'||c=='/')
    {
        return 2;
    }
    else if(c=='+'||c=='-')
    {
        return 1;
    }
    else
    {
        return -1;
    }
}

string InfixToPostfix(string s)
{
    string res;
    stack<char> st;
    for (int i=0;i<s.length();i++){
        if((s[i]>='a'&& s[i]<='z')||(s[i]>='A'&&s[i]<='Z'))
        {
            res+=s[i];
        }
        else if(s[i]=='(')
        {
            st.push(s[i]);
        }
        else if(s[i]==')')
        {
            while((!st.empty())&&(st.top()!='('))
            {
                res+=st.top();
                st.pop();
            }
            if(!st.empty())
            {
                st.pop();
            }
        }
        else       //In else it will cover the cases when s[i] is some operator.
        {
            while(!st.empty() && prec(s[i])<prec(st.top()))
            {
                res+=st.top();
                st.pop();
            }
            st.push(s[i]);
        }

    }
    while(!st.empty())
    {
        res+=st.top();
        st.pop();
    }
    return res;
}
int main ()
{
    cout<<InfixToPostfix("(a-b/c)*(a/k-l)");
    return 0;
}