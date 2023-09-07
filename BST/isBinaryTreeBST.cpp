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
int minValue(BinaryTreeNode<int> *root, int min = INT_MAX){
	if(root== NULL){
		return min;
	}
	if(root->data < min){
		min = root->data;
	}
	min = minValue(root->left, min);
	min = minValue(root->right, min);
	return min;
}

int maxValue(BinaryTreeNode<int> *root, int max = INT_MIN){
	if(root== NULL){
		return max;
	}
	if(root->data > max){
		max = root->data;
	}
	max = maxValue(root->left, max);
	max = maxValue(root->right, max);
	return max;
}

bool isBST(BinaryTreeNode<int> *root, bool f= true) {
	if(root == NULL){
		return f;
	}
	if(root->left){
	if(maxValue(root->left) >= root->data){
		f = false;
		return f;
	}
	}
	if(root->right){
	if(minValue(root->right) <= root->data){
		f = false;
		return f;
	}
	}
	f = isBST(root->left, f);
	f = isBST(root->right, f);
	return f;
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
    cout << (isBST(root) ? "true" : "false");
}