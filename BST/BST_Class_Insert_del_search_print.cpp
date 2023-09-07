#include <iostream>
using namespace std;

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

/*******************************************************************************/
class BST {
    BinaryTreeNode<int> *root;
    private:
    bool search(BinaryTreeNode<int> *node, int key){
    if (node == NULL)
       return false;
    if ( node->data == key)
       return true;
    else if (node->data > key)
       return search(node->left, key);
    else return search(node->right, key);
    }
    BinaryTreeNode<int> *insert(int data, BinaryTreeNode<int> *node) { 
        if(node == NULL){
            BinaryTreeNode<int> *newNode = new BinaryTreeNode<int>(data);
            return newNode;
        }
        if(data <= node->data){
            node->left = insert(data, node->left);
        }else{
            node->right = insert(data, node->right);
        }
        return node;
    }
    BinaryTreeNode<int> *deleteData(int data, BinaryTreeNode<int> *node) {
      if(node == NULL){
          return NULL;
      }
      if(data < node->data){
          node->left = deleteData(data, node->left);
      }else{
          if(node->left == NULL && node->right == NULL){
              delete node;
              return NULL;
          }else if(node->right == NULL){
            BinaryTreeNode<int> *temp = node->left;
            node->left  = NULL;
            delete node;
            return temp;
          } else if (node->left == NULL) {
            BinaryTreeNode<int> *temp = node->right;
            node->right = NULL;
            delete node;
            return temp;
          }else{
            BinaryTreeNode<int> * minData = node->right;
            while(minData->left!= NULL){
                minData = minData->left;
            }
            int rightMin = minData->data;
            node->data = rightMin;
            node->right = deleteData(rightMin , node->right);
            return node;
          }
      }
    }
    void printTree(BinaryTreeNode<int> *root) {
      if (root == NULL) {
        return;
      }
      cout << root->data << ":";
      if (root->left != NULL) {
        cout << "L:" << root->left->data<<",";
      }
      if (root->right != NULL) {
        cout << "R:" << root->right->data;
      }
      cout << endl;
      printTree(root->left);
      printTree(root->right);
    }

   public:
    BST() { 
        root = NULL;
    }
    ~BST() { 
        delete root;
    }
    void remove(int data) { 
        this->root = deleteData(data, this->root);
    }

    void print() {
      printTree(this->root);
    }

    void insert(int data) { 
        this->root = insert(data, this->root);
    }

    bool search(int data) {
		return search(root, data);
    }
};
/*******************************************************************************/

int main() {
    BST *tree = new BST();
    int choice, input, q;
    cin >> q;
    while (q--) {
        cin >> choice;
        switch (choice) {
            case 1:
                cin >> input;
                tree->insert(input);
                break;
            case 2:
                cin >> input;
                tree->remove(input);
                break;
            case 3:
                cin >> input;
                cout << ((tree->search(input)) ? "true\n" : "false\n");
                break;
            default:
                tree->print();
                break;
        }
    }
}