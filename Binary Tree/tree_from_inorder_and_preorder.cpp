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
};

using namespace std;

/********************************************************************************************/

int search(int inorder[], int start, int end, int curr){
	for(int i = start; i<= end;i++){
		if(inorder[i] == curr){
			return i;
		}
	}
	return -1;
}

BinaryTreeNode<int>* buildTre(int *preorder, int start, int *inorder, int end){
	if(start>end){
		return NULL;
	}
	static int idx = 0;
	int curr = preorder[idx];
	idx++;
	BinaryTreeNode<int>* root = new BinaryTreeNode<int>(curr);
	if(start == end){
		return root;
	}
	int pos = search(inorder, start, end, curr);
	root->left = buildTre(preorder, start, inorder, pos-1);
	root->right = buildTre(preorder, pos+1, inorder, end);
	
}
BinaryTreeNode<int>* buildTree(int *preorder, int preLength, int *inorder, int inLength) {
	int start =0;
	int end = inLength-1;
    BinaryTreeNode<int>* root = buildTre(preorder, start, inorder, end);
}

/********************************************************************************************/

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
    int size;
    cin >> size;
    int *pre = new int[size];
    int *in = new int[size];
    for (int i = 0; i < size; i++) cin >> pre[i];
    for (int i = 0; i < size; i++) cin >> in[i];
    BinaryTreeNode<int> *root = buildTree(pre, size, in, size);
    printLevelATNewLine(root);
}