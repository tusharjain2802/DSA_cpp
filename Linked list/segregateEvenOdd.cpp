// https://practice.geeksforgeeks.org/problems/segregate-even-and-odd-nodes-in-a-linked-list5035/1

//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};
void printList(Node* node) 
{ 
    while (node != NULL) { 
        cout << node->data <<" "; 
        node = node->next; 
    }  
    cout<<"\n";
} 


// } Driver Code Ends
//User function template for C++

/*
struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};
*/
class Solution{
public:
    Node* divide(int N, Node *head){
        Node *odd=0, *even=0, *o=0, *e=0;
        while(head!=0){
          //  cout<<head->data<<" ";
            if(head->data%2==0){
                if(even == 0){
                    even = head;
                    e=head;
                }
                else{
                    e->next=head;
                    e = head;
                }
            }
            else{
                if(odd == 0){
                    odd = head;
                    o=head;
                }
                else{
                    o->next=head;
                    o = head;
                }
            }
            head = head->next;
        }
        if(e)e->next = odd;
       // else e->next=0;
        if(o)o->next=0;
        if(even!=0) return even;
        else return odd;
    }
};

//{ Driver Code Starts.

int main() {
    //code
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        int data;
        cin>>data;
        struct Node *head = new Node(data);
        struct Node *tail = head;
        for (int i = 0; i < N-1; ++i)
        {
            cin>>data;
            tail->next = new Node(data);
            tail = tail->next;
        }
        
        Solution ob;
        Node *ans = ob.divide(N, head);
        printList(ans); 
    }
    return 0;
}

// } Driver Code Ends