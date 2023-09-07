#include <stdio.h>
#include <stdlib.h>
void createCLL();
void display();
struct node {
    int data;          
    struct node *next; 
}*tail;
int main(){
	createCLL();
	display();
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
		printf("%d",temp->data);
	}
}
