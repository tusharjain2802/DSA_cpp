#include <iostream>
#include <queue>

template <typename T>
class BinaryTreeNode {
   public:
    T data;
    BinaryTreeNode<T> *left;
    BinaryTreeNode<T> *right;

    BinaryTreeNode(T data) {
        this->data = data;
        left = NULL;
        right = NULL;
    }

    ~BinaryTreeNode() {
        if (left) delete left;
        if (right) delete right;
    }
};

using namespace std;
/*******************************************************************************/
BinaryTreeNode<int> *cloneBinaryTree(BinaryTreeNode<int> *root) {
  if (root == NULL) return NULL;
  BinaryTreeNode<int> *newNode = new BinaryTreeNode<int>(root->data);
  newNode->left = cloneBinaryTree(root->left);
  newNode->right = cloneBinaryTree(root->right);
  return newNode;
}
int alterData(BinaryTreeNode<int> *root, int data, int sum){
	if(root == NULL){
		return sum;
	}
	if(root->data >data){
		sum+= root->data;
	}
	sum = alterData(root->left, data, sum);
	sum = alterData(root->right, data, sum);
	return sum;
}
void replaceWith(BinaryTreeNode<int> *temp, BinaryTreeNode<int> *root) {
  if (root == NULL) {
    return;
  }
  int num = alterData(temp, root->data, root->data);
  root->data = num;
  replaceWith(temp, root->left);
  replaceWith(temp, root->right);
  return;
}

void replaceWithLargerNodesSum(BinaryTreeNode<int> *root) {
  BinaryTreeNode<int> *temp = cloneBinaryTree(root);
  replaceWith(temp, root);
}
/*******************************************************************************/

BinaryTreeNode<int> *takeInput() {
    int rootData;

    cin >> rootData;
    if (rootData == -1) {
        return NULL;
    }
    BinaryTreeNode<int> *root = new BinaryTreeNode<int>(rootData);
    queue<BinaryTreeNode<int> *> q;
    q.push(root);
    while (!q.empty()) {
        BinaryTreeNode<int> *currentNode = q.front();
        q.pop();
        int leftChild, rightChild;

        cin >> leftChild;
        if (leftChild != -1) {
            BinaryTreeNode<int> *leftNode = new BinaryTreeNode<int>(leftChild);
            currentNode->left = leftNode;
            q.push(leftNode);
        }

        cin >> rightChild;
        if (rightChild != -1) {
            BinaryTreeNode<int> *rightNode =
                new BinaryTreeNode<int>(rightChild);
            currentNode->right = rightNode;
            q.push(rightNode);
        }
    }
    return root;
}

void printLevelATNewLine(BinaryTreeNode<int> *root) {
    if (root == NULL) {
        return;
    }
    queue<BinaryTreeNode<int> *> q;
    q.push(root);
    q.push(NULL);
    while (!q.empty()) {
        BinaryTreeNode<int> *first = q.front();
        q.pop();
        if (first == NULL) {
            if (q.empty()) {
                break;
            }
            cout << endl;
            q.push(NULL);
            continue;
        }
        cout << first->data << " ";
        if (first->left != NULL) {
            q.push(first->left);
        }
        if (first->right != NULL) {
            q.push(first->right);
        }
    }
}

int main() {
    BinaryTreeNode<int> *root = takeInput();
    replaceWithLargerNodesSum(root);
    printLevelATNewLine(root);
    delete root;
}