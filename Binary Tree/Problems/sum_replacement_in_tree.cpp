//the value of leave nodes will remain unchganged.
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

void preorder(node* root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);

}

void sumReplace(node* root){
    if(root==NULL){
        return;
    }
    sumReplace(root->left);
    sumReplace(root->right);
    if(root->left !=NULL){
        root->data+=root->left->data;
    }
    if(root->right!=NULL){
        root->data +=root->right->data;
    }
}

int main(){
    node* root = new node(1);
    root->left= new node(2);
    root->right=new node(3);
/*
        1              15
       /  \           /  \
      2    3  -->   11    3
     / \           / \   
    4  5           4  5
*/
    root->left->left=new node(4);
    root->left->right=new node(5);
    cout<<"Original Tree: "<<endl;
    preorder(root);
    cout<<endl<<"Tree after Sum Replacement: "<<endl;
    sumReplace(root);
    preorder(root);
    return 0;
}
