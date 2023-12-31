#include <iostream>
#include <queue>
#include <vector>
using namespace std;

template <typename T>
class TreeNode {
   public:
    T data;
    vector<TreeNode<T>*> children;

    TreeNode(T data) { this->data = data; }

    ~TreeNode() {
        for (int i = 0; i < children.size(); i++) {
            delete children[i];
        }
    }
};

TreeNode<int> *findMax(TreeNode<int> *root, TreeNode<int> *max);

TreeNode<int> *maxDataNode(TreeNode<int> *root) {
     TreeNode<int> *max = root;
    return findMax(root, max);
}
TreeNode<int> *findMax(TreeNode<int> *root, TreeNode<int> *max){
  if (root == NULL) {
    return NULL;
  }
  for (int i = 0; i < root->children.size(); i++) {
    if (root->children[i]->data > max->data) {
      max = root->children[i];
    }
    //cout<<"root"<<root->children[i]->data << "max "<<max->data<<endl; 
    max = findMax(root->children[i], max);
  }
  return max;
}

TreeNode<int>* takeInputLevelWise() {
    int rootData;
    cin >> rootData;
    TreeNode<int>* root = new TreeNode<int>(rootData);

    queue<TreeNode<int>*> pendingNodes;

    pendingNodes.push(root);
    while (pendingNodes.size() != 0) {
        TreeNode<int>* front = pendingNodes.front();
        pendingNodes.pop();
        int numChild;
        cin >> numChild;
        for (int i = 0; i < numChild; i++) {
            int childData;
            cin >> childData;
            TreeNode<int>* child = new TreeNode<int>(childData);
            front->children.push_back(child);
            pendingNodes.push(child);
        }
    }

    return root;
}

int main() {
    TreeNode<int>* root = takeInputLevelWise();
    TreeNode<int>* ans = maxDataNode(root);

    if (root != NULL) {
        cout << ans->data;
    }
}