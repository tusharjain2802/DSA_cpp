#include<bits/stdc++.h>

template <typename T>
class BinaryTreeNode {
    public :
    T data;
    BinaryTreeNode<T> *left;
    BinaryTreeNode<T> *right;
    
    BinaryTreeNode(T data) {
        this -> data = data;
        left = NULL;
        right = NULL;
    }
};

using namespace std;

/*******************************************************************************/
vector<int> v1;
void elementsInRange(BinaryTreeNode<int>* root, int k1, int k2){
	if(root==NULL){
		return;
	}
	if((root->data>=k1) && (root->data<=k2)){
		v1.push_back(root->data);
	}
	if(root->data>= k2) elementsInRange(root->left, k1, k2);
	else if(root->data <= k1) elementsInRange(root->right, k1, k2);
	else{
		elementsInRange(root->left, k1, k2);
		elementsInRange(root->right, k1, k2);
	}
	return;
}
void elementsInRangeK1K2(BinaryTreeNode<int>* root, int k1, int k2 ) {
	elementsInRange(root, k1,k2);
	sort(v1.begin(), v1.end());
	for(int i=0;i<v1.size();i++){
		cout<<v1[i]<<" ";
	}
}
/*******************************************************************************/

BinaryTreeNode<int>* takeInput() {
    int rootData;
    //cout << "Enter root data : ";
    cin >> rootData;
    if(rootData == -1) {
        return NULL;
    }
    BinaryTreeNode<int> *root = new BinaryTreeNode<int>(rootData);
    queue<BinaryTreeNode<int>*> q;
    q.push(root);
    while(!q.empty()) {
        BinaryTreeNode<int> *currentNode = q.front();
        q.pop();
        int leftChild, rightChild;
        //cout << "Enter left child of " << currentNode -> data << " : ";
        cin >> leftChild;
        if(leftChild != -1) {
            BinaryTreeNode<int>* leftNode = new BinaryTreeNode<int>(leftChild);
            currentNode -> left =leftNode;
            q.push(leftNode);
        }
        //cout << "Enter right child of " << currentNode -> data << " : ";
        cin >> rightChild;
        if(rightChild != -1) {
            BinaryTreeNode<int>* rightNode = new BinaryTreeNode<int>(rightChild);
            currentNode -> right =rightNode;
            q.push(rightNode);
        }
    }
    return root;
}

int main() {
    BinaryTreeNode<int>* root = takeInput();
    int k1, k2;
    cin >> k1 >> k2;
    elementsInRangeK1K2(root, k1, k2);
}