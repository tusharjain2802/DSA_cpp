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
BinaryTreeNode <int>* getlcs(BinaryTreeNode <int>* root , int a, int b){
	if(root == NULL){
		return NULL;
	}
	if(root->data == a || root->data == b){
		return root;
	}
	BinaryTreeNode <int>* left = getlcs(root->left, a, b);
	BinaryTreeNode <int>*right = getlcs(root->right, a, b);
	if(left == NULL) return right;
	if(right == NULL) return left;
	return root;

}
int getLCA(BinaryTreeNode <int>* root , int a, int b) {
	BinaryTreeNode <int>*temp = getlcs(root, a, b);
	if(temp== NULL){
		return -1;
	}
	return temp->data;
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
    int a, b;
    cin >> a >> b;
    cout << getLCA(root, a, b);
    delete root;
}