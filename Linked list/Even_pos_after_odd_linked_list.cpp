#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;
    node(int val)
    {
        data = val;
        next = NULL;
    }
};

void InsertAtEnd(node *&head, int val)
{
    node *n = new node(val);
    if (head == NULL)
    {
        head = n; //head will store the adress of the starting link which contans val;
        return;
    }

    node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
}

void InsertAtStart(node *&head, int val)
{
    node *n = new node(val);
    n->next = head;
    head = n;
}

void display(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }

    cout << "NULL" << endl;
}

void EvenAfterOdd(node *&head)
{
    node *odd = head;
    node *even = head->next;
    node *evenStart = even;
    while (odd->next != NULL && even->next != NULL)
    {
        odd->next = even->next;
        odd = odd->next;
        even->next = odd->next;
        even = even->next;
    }


    if (odd->next != NULL)
    {
        even->next = NULL;
    }
    odd->next = evenStart;
}

int main()
{
    node*head=NULL;
	int arr[]={1,2,3,4,5,6};
    for(int i=0;i<6;i++){
        InsertAtEnd(head, arr[i]);
    }	
    cout<<"Original: "<<endl;
    display(head);
    EvenAfterOdd(head);
    cout<<"New list with Even Position Nodes after Odd Position Nodes: "<<endl;
    display(head);
}
