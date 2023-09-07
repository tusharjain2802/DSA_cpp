#include<bits/stdc++.h>

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
pair<int, int> getMaxMin(BinaryTreeNode<int> *root, pair<int, int> p) {
	if(root == NULL){
		return p;
	}
	if(root!= NULL){
		if(root->data < p.first){
			p.first = root->data;
	
		}
		if (root->data > p.second) {
			p.second = root->data;
		}
        }
	p = getMaxMin(root->left, p);
    p = getMaxMin(root->right, p);
	return p;
}

pair<int, int> getMinAndMax(BinaryTreeNode<int> *root) {
  pair<int, int> p;
  p.first = INT_MAX;
  p.second = INT_MIN;
  return getMaxMin(root, p);
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
            BinaryTreeNode<int>* rightNode = new BinaryTreeNode<int>(rightChild);
            currentNode->right = rightNode;
            q.push(rightNode);
        }
    }
    return root;
}

int main() {
    BinaryTreeNode<int>* root = takeInput();
    pair<int, int> ans = getMinAndMax(root);
    cout << ans.first << " " << ans.second;
}