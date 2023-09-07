#include <stdio.h>
#include<iostream>
#include <stdlib.h>
using namespace std;
struct node {
    int data;          
    struct node *next; 
}*head;
void createList(int n){
    struct node *newNode, *temp;
    int data, i;

    head = (struct node *)malloc(sizeof(struct node));

    // Terminate if memory not allocated
    if(head == NULL)
    {
        printf("Unable to allocate memory.");
        exit(0);
    }


    // Input data of node from the user
    printf("Enter the data of node 1: ");
    scanf("%d", &data);

    head->data = data; // Link data field with data
    head->next = NULL; // Link address field to NULL


    // Create n - 1 nodes and add to list
    temp = head;
    for(i=2; i<=n; i++)
    {
        newNode = (struct node *)malloc(sizeof(struct node));

        /* If memory is not allocated for newNode */
        if(newNode == NULL)
        {
            printf("Unable to allocate memory.");
            break;
        }

        printf("Enter the data of node %d: ", i);
        scanf("%d", &data);

        newNode->data = data; // Link data field of newNode
        newNode->next = NULL; // Make sure new node points to NULL 

        temp->next = newNode; // Link previous node with newNode
        temp = temp->next;    // Make current node as previous node
    }
}

node *kappend(int l,int k){
    node *newHead;
    node* newTail;
    node* tail=head;
    int count=1;
    while(tail->next!=NULL){
        if(count==l-k){
            newTail=tail;
        }
        if(count=l-k+1){
            newHead=tail;
        }
        tail=tail->next;
        count++;
    }
    newTail->next=NULL;
    tail->next=head;
    return newHead;
}


void traverseList()
{
    struct node *temp;

    // Return if list is empty 
    if(head == NULL)
    {
        printf("List is empty.");
        return;
    }
    
    temp = head;
    while(temp != NULL)
    {
        printf("Data = %d\n", temp->data); // Print data of current node
        temp = temp->next;                 // Move to next node
    }
}
void newList(node* newHead)
{
    struct node *temp;
    temp =newHead;
    while(temp != NULL)
    {
        printf("Data = %d\n", temp->data); 
        temp = temp->next;                 
    }
}
int main()
{
    int n,k;
    printf("Enter the total number of nodes: ");
    scanf("%d", &n);
    createList(n);
    traverseList();
    printf("Enter the value of k: ");
    cin>>k;
    node* newHead=kappend(n,k);
    newList(newHead);
    return 0;
}