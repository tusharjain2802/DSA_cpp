#include<iostream>
#include<stack>
using namespace std;

int main(){
    int n,max=INT_MIN;
    stack<int> st,st1;
    cout<<"Enter the number of operations you want to do"<<endl;
    cin>>n;
    cout<<"1.Push one element\n2.Delete top element\n3.Print max number in the stack\n";
    for(int i=0;i<n;i++){
        int choice,num;
        cin>>choice;
        switch(choice){
            case 1:
            	cin>>num;
            	st.push(num);
            	break;
            case 2:
            	st.pop();
            	break;
            case 3:
			st1=st;
			while(!st1.empty()){
				if(!st1.empty() && max<st1.top()){
					max=st1.top();
				}
				st1.pop();
			}
            	cout<<max<<endl;
				max=INT_MIN;
            	break;
            default:
            	cout<<"Wrong Choice"<<endl;
            	break;
        }
    }
}

