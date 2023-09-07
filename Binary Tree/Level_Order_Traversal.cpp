// Max number of Nodes at level l is 2^l
// maximum number of Nodes in a tree of height H is (2^H)-1
// for n Nodes the minimum number of height or levels is log(base(2))(N+1)
#include<iostream>
#include<queue>
using namespace std;
struct Node
{
    int data;
    struct Node* right;
    struct Node* left;
    Node(int val){
        data=val;
        right=NULL;
        left=NULL;
    }
};

int sumatk(Node* root, int k){
    if(root==NULL){
        return -1;
    }
    queue<Node*> q;
    q.push(root);
    q.push(NULL);
    int level=0;
    int sum=0;
    while (!q.empty())
    {
        Node* node= q.front();
        q.pop();
        if(node!=NULL){
            if(level==k){
                sum+=node->data;
            }
            if(node->left){
                q.push(node->left);
            }
            if(node->right){
                q.push(node->right);
            }
        }
        else if(!q.empty()){
            q.push(NULL);
            level++;
        }
    }
    return sum;    
}

void printLevelOrder(Node* root){
    if(root==NULL){
        return;
    }
    queue<Node*> q;
    q.push(root);
    q.push(NULL);
    while (!q.empty())
    {
        Node* node=q.front();
        q.pop();
        if(node!=NULL){
            cout<<node->data<<" ";
            if(node->left){
                q.push(node->left);
            }
            if(node->right){
                q.push(node->right);
            }
            }
        else if(!q.empty()){
            q.push(NULL);
        }
    }
}

int main(){
    Node* root = new Node(1);
    root->left= new Node(2);
    root->right=new Node(3);
    root->left->left=new Node(4);
    root->left->right=new Node(5);
    root->right->left=new Node(6);
    root->right->right=new Node(7); 
    printLevelOrder(root); 
    int k;
    cout<<endl<<"Enter the value of level k at which u want to find the sum: ";
    cin>>k;
    cout<<sumatk(root,k)<<endl;
    return 0;
}