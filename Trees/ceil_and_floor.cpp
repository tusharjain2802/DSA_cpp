#include <iostream>
#include <queue>
#include <vector>
#include <climits>
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

int c = INT_MAX;
int flloor = INT_MIN;

void getSecondLargestNode(TreeNode<int>* root, int num=INT_MAX) {
    if(root->data > num){
        if(root->data < c){
            c = root->data;
        }
    }
    if(root->data < num){
        if(root->data > flloor){
            flloor = root->data;
        }
    }
    for (int i = 0; i < root->children.size(); i++)
    {
        getSecondLargestNode(root->children[i], num);
    }
    return;
    
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
void printTree(TreeNode<int>* root){
    cout<<root->data<<":";
    for(int i=0;i<root->children.size();i++){
        cout<<root->children[i]->data<<",";
    }
    cout<<endl;
    for(int i=0;i<root->children.size();i++){
        printTree(root->children[i]);
    }
}
int main() {
    TreeNode<int>* root = takeInputLevelWise();
    printTree(root);
    getSecondLargestNode(root);
    cout<<"ceil: "<<c<<" floor: "<<flloor<<endl;

}