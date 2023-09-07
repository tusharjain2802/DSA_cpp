// https://practice.geeksforgeeks.org/problems/transform-to-sum-tree/1

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
};
// Utility function to create a new Tree Node
Node* newNode(int val)
{
    Node* temp = new Node;
    temp->data = val;
    temp->left = NULL;
    temp->right = NULL;
    
    return temp;
}
// Function to Build Tree
Node* buildTree(string str)
{   
    // Corner Case
    if(str.length() == 0 || str[0] == 'N')
            return NULL;
    
    // Creating vector of strings from input 
    // string after spliting by space
    vector<string> ip;
    
    istringstream iss(str);
    for(string str; iss >> str; )
        ip.push_back(str);
        
    // Create the root of the tree
    Node* root = newNode(stoi(ip[0]));
        
    // Push the root to the queue
    queue<Node*> queue;
    queue.push(root);
        
    // Starting from the second element
    int i = 1;
    while(!queue.empty() && i < ip.size()) {
            
        // Get and remove the front of the queue
        Node* currNode = queue.front();
        queue.pop();
            
        // Get the current node's value from the string
        string currVal = ip[i];
            
        // If the left child is not null
        if(currVal != "N") {
                
            // Create the left child for the current node
            currNode->left = newNode(stoi(currVal));
                
            // Push it to the queue
            queue.push(currNode->left);
        }
            
        // For the right child
        i++;
        if(i >= ip.size())
            break;
        currVal = ip[i];
            
        // If the right child is not null
        if(currVal != "N") {
                
            // Create the right child for the current node
            currNode->right = newNode(stoi(currVal));
                
            // Push it to the queue
            queue.push(currNode->right);
        }
        i++;
    }
    
    return root;
}
void inorder(Node * node)
{
    if(node==NULL)
        return;
    
    inorder(node->left);
    cout<<node->data<<" ";
    inorder(node->right);
}


// } Driver Code Ends
//User function template for C++

/* A binary tree node
struct Node
{
    int data;
    Node* left, * right;
}; */

class Solution {
  public:
  
    // Convert a given tree to a tree where every node contains sum of values of
    // nodes in left and right subtrees in the original tree
      Node* cloneTree(Node* root)
    {
       // base case
    if (root == NULL) {
        return NULL;
    }
 
    // create a new node with the same data as the root node
    Node* root_copy = new Node();
    root_copy->data = root->data;
 
    // clone the left and right subtree
    root_copy->left = cloneTree(root->left);
    root_copy->right = cloneTree(root->right);
 
    // return cloned root node
    return root_copy;
    }
    void toSum(Node *root)
    {

       if(root == NULL) return;
       toSum(root->left);
       toSum(root->right);
       int l=0; 
       int r=0;
       if(root->left){
           l=root->left->data;
       }
       else {
           l=0;
       }
       if(root->right){
           r= root->right->data;
       }
       else{
           r=0;
           
       }
       root->data += l+r;
       return;
    }
    void subtract(Node *root, Node *copy){
        if(root==NULL) return;
        root->data -=copy->data;
        subtract(root->left, copy->left);
        subtract(root->right, copy->right);
        return;
    }
    void toSumTree(Node *root)
    {
       Node *root_copy = cloneTree(root);
       toSum(root);
       subtract(root, root_copy);
       return;
    }
};

//{ Driver Code Starts.

int main()
{

    int t;
	scanf("%d ",&t);
    while(t--)
    {
        string s;
		getline(cin,s);
        Node* root = buildTree(s);
        Solution ob;
        ob.toSumTree(root);
        inorder(root);
        cout<<endl;
    }
    return 1;
}
// } Driver Code Ends