#include<iostream>
#define n 20
using namespace std;
class queue{
    int *arr;
    int back;
    int front;
    public:
    queue(){
        front=-1;
        back=-1;
        arr= new int[n];
    }
    void push(int x){
        if(back==n-1){
            cout<<"Queue Overflow"<<endl;
            return;
        }
        back++;
        arr[back]=x;
        if(front==-1){
            front++;
        }
    }
    void pop(){
        if(front==-1 || front>back){
            cout<<"No elements in the queue"<<endl;
            return;
        }
        front++;
    }
    int peek(){
        if(front==-1 || front>back){
            cout<<"No elements in the queue"<<endl;
            return -1;
        }
        return arr[front];
    }
    bool empty(){
        if(front==-1 || front>back){
            return true;
        }
        return false;
    }
};
int main(){
    queue q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    cout<<q.peek()<<endl;
    q.pop();
    cout<<q.peek()<<endl;
    q.pop();
    cout<<q.peek()<<endl;
    q.pop();
    cout<<q.peek()<<endl;
    
}
