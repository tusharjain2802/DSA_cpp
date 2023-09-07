// https://leetcode.com/problems/validate-binary-search-tree/description/

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
    int maximum = INT_MIN;
    int minimum = INT_MAX;
    void maxi(TreeNode* root){
        if(root==NULL) return;
        if(root->val > maximum){
            maximum = root->val;
        }
        maxi(root->left);
        maxi(root->right);
        return;
    }
    void mini(TreeNode* root){
        if(root==NULL) return;
        if(root->val < minimum){
            minimum = root->val;
        }
        mini(root->left);
        mini(root->right);
        return;
    }
    bool isValidBST(TreeNode* root) {
        if(root==NULL) return true;
        minimum = INT_MAX;
        maximum = INT_MIN;
        if(root->left){
            maxi(root->left);
            if (maximum>= root->val){
            return false;
        }
        }
        if(root->right){
            mini(root->right);
            if (minimum <= root->val){
            return false;
        }
        }
        bool l =  isValidBST(root->left);
        bool r = isValidBST(root->right);
        return l && r;
    }
};