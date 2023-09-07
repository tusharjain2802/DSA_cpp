#include<stdio.h>
#include <stdlib.h>
void reverse();
void traverseList();
struct node {
    int data;          // Data 
    struct node *next; // Address 
}*head;
int main(){
	int n;
    printf("Enter the total number of nodes: ");
    scanf("%d", &n);
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
	reverse();
	printf("The reversed linked list is as follows:\n");
	traverseList();    
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
void reverse(){
	struct node *prevnode, *temp, *nextnode;
	prevnode=0;
	temp=head;
	nextnode=head;
	while(nextnode!=0){
		nextnode=nextnode->next;
		temp->next=prevnode;
		prevnode=temp;
		temp=nextnode;
	}
	head=prevnode;
}
