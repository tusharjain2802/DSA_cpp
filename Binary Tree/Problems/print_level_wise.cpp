#include <iostream>
#include <queue>

template <typename T>
class BinaryTreeNode
{
public:
    T data;
    BinaryTreeNode<T> *left;
    BinaryTreeNode<T> *right;

    BinaryTreeNode(T data)
    {
        this->data = data;
        left = NULL;
        right = NULL;
    }
};

using namespace std;

/*******************************************************************************/

void printLevelWise(BinaryTreeNode<int> *root)
{
    queue<BinaryTreeNode<int> *> q1;
    if (root == NULL)
    {
        return;
    }
    q1.push(root);
    queue<BinaryTreeNode<int> *> q2;
    BinaryTreeNode<int> *temp;
    while (!q1.empty() || !q2.empty())
    {
        while (!q1.empty())
        {
            temp = q1.front();
            cout << temp->data << " ";
            if (temp->left != NULL)
            {
                q2.push(temp->left);
            }
            if (temp->right != NULL)
            {
                q2.push(temp->right);
            }
            q1.pop();
        }
        cout << endl;
        while (!q2.empty())
        {
            temp = q2.front();
            cout << temp->data << " ";
            if (temp->left != NULL)
            {
                q1.push(temp->left);
            }
            if (temp->right != NULL)
            {
                q1.push(temp->right);
            }
            q2.pop();
        }
        cout << endl;
    }
}

/*******************************************************************************/

BinaryTreeNode<int> *takeInput()
{
    int rootData;

    cin >> rootData;
    if (rootData == -1)
    {
        return NULL;
    }
    BinaryTreeNode<int> *root = new BinaryTreeNode<int>(rootData);
    queue<BinaryTreeNode<int> *> q;
    q.push(root);
    while (!q.empty())
    {
        BinaryTreeNode<int> *currentNode = q.front();
        q.pop();
        int leftChild, rightChild;

        cin >> leftChild;
        if (leftChild != -1)
        {
            BinaryTreeNode<int> *leftNode = new BinaryTreeNode<int>(leftChild);
            currentNode->left = leftNode;
            q.push(leftNode);
        }

        cin >> rightChild;
        if (rightChild != -1)
        {
            BinaryTreeNode<int> *rightNode =
                new BinaryTreeNode<int>(rightChild);
            currentNode->right = rightNode;
            q.push(rightNode);
        }
    }
    return root;
}

int main()
{
    BinaryTreeNode<int> *root = takeInput();
    printLevelWise(root);
}