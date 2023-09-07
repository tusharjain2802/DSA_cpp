// https://practice.geeksforgeeks.org/problems/construct-binary-tree-from-string-with-bracket-representation/1

//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

/* A binary tree node has data, pointer to left
child and a pointer to right child */
class Node
{
public:
    int data;
    Node *left, *right;
    Node(int data)
    {
        this->data = data;
        this->left = this->right = NULL;
    }
};

/* This function is to print the inorder of the tree  */
void inorder(Node *root)
{
    if (root == NULL)
        return;
    inorder(root->left);
    printf("%d ", root->data);
    inorder(root->right);
}



// } Driver Code Ends
//User function Template for C++

/*
class Node
{
public:
    int data;
    Node *left, *right;
    Node(int data)
    {
        this->data = data;
        this->left = this->right = NULL;
    }
};
*/


class Solution{
public:
    // function to construct tree from string
    map<int, int> m;
    stack<int> st;
    
    void indexify(string str){
        for(int i=0;i<str.size();i++){
            if(str[i] == '('){
                st.push(i);
            }
            else if(str[i] == ')'){
                int temp = st.top();
                st.pop();
                m[temp] = i;
            }
            else continue;
        }
    }
    bool isDigit(char ch){
        return (ch>='0' && ch<='9');
        
    }
    Node *recur(string str, int start, int end){
        if(start>end) return NULL;
        int num=0;
        while(start<str.size() && isDigit(str[start])){
            int x = str[start] - '0';
            num=x+(num*10);
            start++;
        }
        start--;
        Node *root = new Node(num);
        int y=-1;
        if(start+1<=end && str[start+1] == '('){
            y = m[start+1];
        }
        if(y!=-1){
            root->left = recur(str, start+2, y-1);
            root->right = recur(str, y+2, end-1);
        }
        return root;
    }
    Node *treeFromString(string str){
        indexify(str);
        return recur(str, 0, str.size()-1);
    }
};

//{ Driver Code Starts.

// Driver Code
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string str;
        cin >> str;
        Solution obj;
        Node *root = obj.treeFromString(str);
        inorder(root);
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends