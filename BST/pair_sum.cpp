/*
Given a binary tree and an integer S, print all the pair of nodes whose sum equals S.
*/

#include <iostream>
#include <queue>

template <typename T>
class BinaryTreeNode {
   public:
    T data;
    BinaryTreeNode<T>* left;
    BinaryTreeNode<T>* right;

    BinaryTreeNode(T data) {
        this->data = data;
        left = NULL;
        right = NULL;
    }
};

using namespace std;
/*******************************************************************************/
#include<bits/stdc++.h>
map<int, int> m1;

void insert(BinaryTreeNode<int> *root){
  if (root == NULL) {
    return;
  }
  m1[root->data]++;
  insert(root->left);
  insert(root->right);
  return;
}
void pairSum(BinaryTreeNode<int> *root, int sum){
	insert(root);
	for (auto pr : m1) {
		int temp  = pr.first;
		m1[temp]--;
          if (m1[sum - temp] >0) {
			  cout<<temp<<" "<<(sum - temp)<<endl;
          }
        }
}
/*******************************************************************************/

BinaryTreeNode<int>* takeInput() {
    int rootData;
    cin >> rootData;
    if (rootData == -1) {
        return NULL;
    }
    BinaryTreeNode<int>* root = new BinaryTreeNode<int>(rootData);
    queue<BinaryTreeNode<int>*> q;
    q.push(root);
    while (!q.empty()) {
        BinaryTreeNode<int>* currentNode = q.front();
        q.pop();
        int leftChild, rightChild;

        cin >> leftChild;
        if (leftChild != -1) {
            BinaryTreeNode<int>* leftNode = new BinaryTreeNode<int>(leftChild);
            currentNode->left = leftNode;
            q.push(leftNode);
        }

        cin >> rightChild;
        if (rightChild != -1) {
            BinaryTreeNode<int>* rightNode =
                new BinaryTreeNode<int>(rightChild);
            currentNode->right = rightNode;
            q.push(rightNode);
        }
    }
    return root;
}

int main() {
    BinaryTreeNode<int>* root = takeInput();
    int sum;
    cin >> sum;
    pairSum(root, sum);
    delete root;
}