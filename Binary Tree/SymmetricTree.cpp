// https://leetcode.com/problems/symmetric-tree/submissions/

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool check(TreeNode* left, TreeNode* right){
        if(right == NULL && left == NULL) return true;
        if(right == NULL || left == NULL) return false;
        if(left->val == right->val) {
            return check(left->left, right->right) && check(left->right, right->left);
        }
        else return false;
    } 
    bool isSymmetric(TreeNode* root) {
        return check(root->left, root->right);
    }
};