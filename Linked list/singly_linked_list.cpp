#include<iostream>
using namespace std;
struct node{
    int data;          
    struct node *next; 
}*start;
void createList(int n);
void traverseList();
int main()
{
    int n;
    cout<<"Enter the total number of nodes: ";
    cin>>n;
    createList(n);
    cout<<"\nData in the list \n";
    traverseList();
    return 0;
}
void createList(int n)
{
    struct node *newNode, *temp;
    int data, i;
    start = new node;
    if(start == NULL)
    {
        cout<<"Unable to allocate memory.";
    }
    cout<<"Enter the data of node 1 \n";
    cin>>data;
    start->data = data; 
    start->next = NULL; 
    temp = start;
    for(i=2; i<=n; i++)
    {
        newNode = new node;
        if(newNode == NULL)
        {
            cout<<"Unable to allocate memory.";
            break;
        }
        cout<<"Enter the data of node "<<i<<endl;
        cin>>data;
        newNode->data = data; 
        newNode->next = NULL; 
        temp->next = newNode; 
        temp = temp->next;    
    }
}
void traverseList()
{
    struct node *p;
    if(start==NULL)
    {
        cout<<"No elements in the list.";
        return;
    }
    p = start;
    while(p!=NULL)
    {
        cout<<p->data<<" "; 
        p = p->next;
    }
}
