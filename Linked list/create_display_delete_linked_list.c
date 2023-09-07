#include <stdio.h>
#include <stdlib.h>
struct node {
    int data;          
    struct node *next; 
}*head;


void createList(int n);
void traverseList();
void delete_from_beg();
void delete_from_end();
void delete_node();
void search();
int main()
{
    int n,choice=1,num;
    printf("Enter the total number of nodes: ");
    scanf("%d", &n);
    createList(n);
    while(choice==1){
    printf("Choose one from the menu:\n1.Traverse List\n2.Delete From Beginning\n3.Delete from the End\n4.Delete any node\n5.Search for a node\n");
    scanf("%d",&num);
    switch(num){
    	case(1):	
    		traverseList();
    		break;
    	case(2):
    		delete_from_beg();
    		break;
    	case(3):
    		delete_from_end();
    		break;
    	case(4):
    		delete_node();
    		break;
    	case(5):
    		search(n);
    		break;
}
	printf("You want to modify the node more (0,1): ");
    scanf("%d",&choice);
}
return 0;
}

void createList(int n)
{
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


/*
 * Display entire list
 */
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

void delete_from_beg(){
	struct node *temp;
	temp=head;
	head=head->next;
	free(temp);
}
void delete_from_end(){
	struct node *temp, *prevnode;
	temp=head;
	while(temp->next!=0){
		prevnode=temp;
		temp=temp->next;
	}
	if(temp==head){
		head=0;
		free(temp);
	}
	else{
		prevnode->next=0; //the second last pointer will become 0(NULL) and will not point anywhere.
		free(temp);
	}
}
void delete_node(){
	struct node *nextnode,*temp;
	int pos,i=1;
	temp=head;
	printf("Enter the pos of node you want to delete: ");
	scanf("%d",&pos);
	while(i<pos-1){
		temp=temp->next;
		i++;
	}
	nextnode=temp->next;
	temp->next=nextnode->next; //pointer os prev node of the node to be deleted is update (linked to the next node of node to be deleted.
	free(nextnode);
}
void search(int n){
	struct node *temp;
	int pos=1, value;
	temp=head;
	printf("Enter the value of node you want to search: ");
	scanf("%d",&value);
	while(temp->data!=value){
		temp=temp->next;
		pos++;
		if (pos>n){
			pos=-1;
			break;
		}
	}
	printf("The data is present at %d position. (-1 indicates node not found)\n",pos);
}
