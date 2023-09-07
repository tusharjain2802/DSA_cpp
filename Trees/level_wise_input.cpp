#include "TreeNode.h"
#include<iostream>
#include<queue>
using namespace std;

TreeNode<int>* takeInputLevelWise(){
    int rootData;
    cout<<"enter root Data"<<endl;
    cin>>rootData;
    TreeNode<int> * root  = new TreeNode<int>(rootData);
    queue<TreeNode<int>*> pendingNodes;
    pendingNodes.push(root);
    while(!pendingNodes.empty()){
        TreeNode<int> *front = pendingNodes.front();
        cout<<"Enter number of childs for "<<front->data<<":";
        pendingNodes.pop();
        int numChild;
        cin>>numChild;
        for(int i=0;i<numChild;i++){
            int childData;
            cout<<"Enter Data for "<<i<< "th child for "<<front->data<<endl;
            cin>>childData;
            TreeNode<int> *child= new TreeNode<int>(childData);
            front->children.push_back(child);
            pendingNodes.push(child);            
        }
    }
    return root;
}

int countNodes(TreeNode<int>* root){
    int ans=1;
    for(int i=0;i<root->children.size();i++){
        ans+= countNodes(root->children[i]);
    }
    return ans;
}

void printTree(TreeNode<int>* root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<":";
    for(int i=0;i<root->children.size();i++){
        cout<<root->children[i]->data<<",";
    }
    cout<<endl;
    for(int i=0;i<root->children.size();i++){
        printTree(root->children[i]);
    }
}

int main(){
    TreeNode<int>* root = takeInputLevelWise();
    printTree(root);
    cout<<"Number of Nodes are: "<< countNodes(root);
    return 0;
}