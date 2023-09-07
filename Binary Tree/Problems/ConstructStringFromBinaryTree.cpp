// https://leetcode.com/problems/construct-string-from-binary-tree/description/

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
    string s="";
    string tree2str(TreeNode* root) {
        if(root == NULL) return s;
        string left, right;
        if(root->left){
            left = "(" + tree2str(root->left)+")";
        }
        if(root->right && !root->left){
            right = "()(" + tree2str(root->right)+")";
        }
        else if(root->right){
            right = "(" + tree2str(root->right)+")";
        }
        return to_string(root->val) + left + right;
    }
};