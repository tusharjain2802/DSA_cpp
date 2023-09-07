#include <bits/stdc++.h>
using namespace std;

stack<int> _push(int arr[],int n);

void _getMinAtPop(stack<int>s);

stack<int> _push(int arr[],int n)
{
   stack<int> st;
    for(int i=0;i<n;i++){
       st.push(arr[i]);
   }
   return st;
}

//Function to print minimum value in stack each time while popping.
void _getMinAtPop(stack<int>s)
{
    stack<int> st;
    int min=s.top();
    while(!s.empty()){
        st=s;
        min=s.top();
        while(!st.empty()){
            st.pop();
            if(st.top()<min && !st.empty()){
                min=st.top();
            }
        }
        cout<<min<<" ";
        s.pop();
    }
}

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    cin>>arr[i];
	    stack<int>mys=_push(arr,n);
	    _getMinAtPop(mys);
	    
	    cout<<endl;
	    
	}
	return 0;
}
