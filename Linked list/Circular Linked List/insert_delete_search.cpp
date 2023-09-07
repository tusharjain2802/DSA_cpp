#include <stdio.h>
#include <stdlib.h>
void createCLL();
void display();
void insertbeg();
void insertend();
void insert(int l);
void deletebeg();
void deleteend();
void deleteany(int l);
void search(int n);
int getlength();
struct node {
    int data;          
    struct node *next; 
}*tail;
int main()
{
    int choice=1,num,l;
    createCLL();
    while(choice==1){
    printf("Choose one from the menu:\n1.Display List\n2.Insert in Beginning\n3.Insert in the end\n4.Insert at any position\n5.Get the length of node\n6.Delete from Beginning\n7.Delete from the end\n8.Delete at any position\n9.Search\n");
    scanf("%d",&num);
    switch(num){
    	case(1):	
    		display();
    		break;
    	case(2):
    		insertbeg();
    		break;
    	case(3):
    		insertend();
    		break;
    	case(4):
    		l=getlength();
    		insert(l);
    		break;
    	case(5):
    		l=getlength();
    		printf("Length of node is %d.\n",l);
    		break;
    	case(6):
    		deletebeg();
    		break;
    	case(7):
    		deleteend();
    		break;
    	case(8):
    		l=getlength();
    		deleteany(l);
    		break;
    	case(9):
    		l=getlength();
    		search(l);
    		break;
    	}
    	printf("You want to modify the node more (0,1): ");
    	scanf("%d",&choice);
    }
    return 0;
}
void createCLL(){
	struct node *newnode;
	int choice=1;
	tail=0;
	while(choice==1){
	newnode=(struct node *)malloc(sizeof(struct node));
	printf("Enter data: ");
	scanf("%d",&newnode->data);
	newnode->next=0;
	if(tail==0){
	tail=newnode;
	tail->next=newnode;
}
	else{
		newnode->next=tail->next; //newnode will get the adress of head i.e. we don't need a head pointer
		tail->next=newnode;   //now tail is modified with adress of next node
		tail =newnode;	// tail is modified to newnode (next node)		
	}
	printf("Do you want to continue: (0,1): ");
	scanf("%d",&choice);
}
}
void display(){
	struct node *temp;
	if(tail==0){
		printf("List is empty");
	}
	else{
		temp=tail->next;  //tail contains adress of head
		while(temp->next!=tail->next){
			printf("%d	",temp->data);
			temp=temp->next;
		}
		printf("%d\n",temp->data);
	}
}
void insertbeg(){
	struct node *newnode;
	newnode=(struct node *)malloc(sizeof(struct node));
	printf("Enter data for the node: ");
	scanf("%d",&newnode->data);
	newnode->next=0;
	if(tail==0){ //no node in list
		tail=newnode;
		tail->next=newnode;
	}		
	else{
		newnode->next=tail->next;
		tail->next=newnode;
	}
}
void insertend(){
	struct node *newnode;
	newnode=(struct node *)malloc(sizeof(struct node));
	printf("Enter data for the node: ");
	scanf("%d",&newnode->data);
	newnode->next=0;
	if(tail==0){ //no node in list
		tail=newnode;
		tail->next=newnode;
	}	
	else{
		newnode->next=tail->next;
		tail->next=newnode;
		tail=newnode;
	}
}
int getlength(){
	int count=0;
	struct node *temp;
	temp=tail->next;
	while(temp->next!=tail->next){
		temp=temp->next;
		count++;
	}
	return count+1;
}
void insert(int l){
	struct node *newnode, *temp;
	int pos,i=1;
	printf("Enter Position: ");
	scanf("%d",&pos);
	if(pos<0 || pos>l){
		printf("Invalid position Entered\n");
	}
	else if(pos==1){
		insertbeg();
	}
	else{
		newnode=(struct node *)malloc(sizeof(struct node));
		printf("Enter data for the node: ");
		scanf("%d",&newnode->data);
		newnode->next=0;
		temp=tail->next;
		while(i<pos-1){
			temp=temp->next;
			i++;
		}
		newnode->next=temp->next;
		temp->next=newnode;
	}
}
void deletebeg(){
	struct node *temp;
	temp=tail->next;
	if (tail==0){
		printf("Node is empty\n");
	}
	else if(temp->next==temp){ // If there is only one node in the list. then temp will point to itself
		tail=0;
		free(temp);
	}
	else{
		tail->next=temp->next;
		free(temp);
	}
}
void deleteend(){
	struct node *current, *prev;
	current=tail->next;
	if(tail==0){
		printf("List is Empty");
	}
	else if(current->next==current){
		tail-0;
		free(current);
	}
	else{
		while(current->next!=tail->next){
			prev=current;
			current=current->next;
		}
		prev->next=tail->next;
		tail=prev;
		free(current);
	}
}
void deleteany(int l){
	struct node *current, *nextnode;
	int pos,i=1;
	printf("Enter Position: ");
	scanf("%d",&pos);
	current=tail->next;
	if(pos<1 || pos>l){
		printf("Invalid Position\n");
	}
	else if(pos==1){
		deletebeg();
	}
	else{
		while(i<pos-1){
			current=current->next;
			i++;
		}
		nextnode=current->next;
		current->next=nextnode->next;
		free(nextnode);
	}
}
void search(int n){
	struct node *temp;
	int pos=1, value;
	temp=tail->next;
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
