// Max number of nodes at level l is 2^l
// maximum number of nodes in a tree of height H is (2^H)-1
// for n nodes the minimum number of height or levels is log(base(2))(N+1)
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

void preorder(struct node* root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);

}
void inorder(struct node* root){
    if(root==NULL){
        return;
    }
    int x=root->data;
    inorder(root->left);
    cout<<root->data<< " ";
    inorder(root->right);
}
void postorder(struct node* root){
    if(root==NULL){
        return;
    }
    int x=root->data;
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<< " ";
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
    cout<<"Preorder Sequence:"<<endl;
    preorder(root);
    cout<<endl;
    cout<<"Inorder Sequence:"<<endl;
    inorder(root);
    cout<<endl;
    cout<<"Postorder Sequence:"<<endl;
    postorder(root);
    cout<<endl;
    return 0;
}

// Preorder Traversal- First we travel left subtree and then right and we keep adding numbers in the sequence
// Inorder Traversal- First we keep travelling to the left subtree without adding any number to sequence. At last we start adding and go to the right subtree of the roots whose left subtree is already checked/travelled.
// PostOrder Traversal- First we travel to left subtree then to right and then add number to sequence(roots)