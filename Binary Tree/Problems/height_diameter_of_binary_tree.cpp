// height of the tree is number of nodes between the root node and the deepest node
//Diameter is the max distance between any 2 leaves.
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

int calcHeight(struct node* root){
    if(root==NULL){
        return 0;
    }
    int lheight = calcHeight(root->left);
    int rheight = calcHeight(root->right);
    return max(lheight,rheight) +1;
}

int calcDiameter(struct node* root){
    if(root==NULL){
        return 0;
    }
    int lheight = calcHeight(root->left);
    int rheight = calcHeight(root->right);
    int currDiameter = lheight+ rheight+1;

    int lDiameter = calcDiameter(root->left);
    int rDiameter = calcDiameter(root->right);
    return max(currDiameter,max(lDiameter,rDiameter));
}

int main(){
    struct node* root = new node(1);
    root->left= new node(2);
    root->right=new node(3);
/*
         1
       /   \
      2     3
     / \   / \
    4  5  6   7
      /
     8
*/
    root->left->left=new node(4);
    root->left->right=new node(5);
    root->right->left=new node(6);
    root->right->right=new node(7);
    root->left->right->left=new node(8);
    cout<<"Max height of the tree is "<<calcHeight(root)<<endl;
    cout<<"Diameter of tree is "<<calcDiameter(root)<<endl;
    return 0;
}
