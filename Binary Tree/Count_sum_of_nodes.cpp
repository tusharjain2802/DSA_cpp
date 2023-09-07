#include<iostream>
using namespace std;
struct node
{
    int data;
    struct node* right;
    struct node* left;
    node(int val){
        data=val;
        right=NULL;
        left=NULL;
    }
};

int countNodes(struct node* root){
    if(root==NULL){
        return 0;
    }
    return countNodes(root->left) + countNodes(root->right) +1;
}

int SumNodes(struct node* root){
    if(root==NULL){
        return 0;
    }
    return SumNodes(root->left) + SumNodes(root->right) + root->data;
}

int main(){
    struct node* root = new node(1);
    root->left= new node(2);
    root->right=new node(3);
/*
        1
       /  \
      2    3
     / \  / \
    4  5 6  7
*/
    root->left->left=new node(4);
    root->left->right=new node(5);
    root->right->left=new node(6);
    root->right->right=new node(7);
    cout<<"The number of nodes in the tree are "<<countNodes(root)<<endl;
    cout<<"The sum of all nodes is "<<SumNodes(root)<<endl;
    return 0;
}
