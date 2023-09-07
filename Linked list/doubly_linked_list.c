#include <stdio.h>
#include <stdlib.h>
void create();
struct node {
    int data;           
    struct node *next;
	struct node* prev; 
}*head,*newnode;
/*
Advantages of doubly linked list:
#We can traverse in both the forward as well as backward direction
#If we have temp variable we can access the next node as well as prev one with just one pointer
#Both insertion and deletion are easier.

Disadvantages:
#It requires more memory: 12 bits
*/
int main(){
	create();
}
void create(){
	struct node *temp;
	int choice=1;
	head=0;
	while(choice==1){
	newnode=(struct node *)malloc(sizeof(struct node));
	printf("Enter Data: ");
	scanf("%d",&newnode->data);
	newnode->prev=0;
	newnode->next=0;
	if(head==0){
		head=newnode;
		temp=newnode;
	}	
	else{
		temp->next=newnode;
		newnode->prev=temp;
		temp=newnode;		
	}
	printf("Do you want to continue?(0,1): ");
	scanf("%d",&choice);
}
}

