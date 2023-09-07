#include<iostream>
#include<queue>
using namespace std;

class stack{
    queue<int> q1;
    queue<int> q2;
    public:
    int N;
    stack(){ 
        N=0;
    }
    void push(int x){
        N++;
        q2.push(x);
        while(!q1.empty()){
            q2.push(q1.front());
            q1.pop();
        }
        queue<int> temp=q2;
        q2=q1;
        q1=temp;
    }
    void pop(){
        N--;
        q1.pop();
    }
    int top(){
        return q1.front();
    }
    int size(){
        return N;
    }
};

int main(){
    stack st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    cout<<st.top()<<endl;
    cout<<"Size: "<<st.size()<<endl;
    st.pop();
    cout<<st.top()<<endl;
    return 0;
}