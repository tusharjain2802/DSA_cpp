// https://leetcode.com/problems/binary-tree-maximum-path-sum

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
    int maxPath(TreeNode* root, int &maxi){
        //&maxi is important to get the address of maxi instead of making a copy 
        if(root==NULL) return 0;
        int leftpath = max(0,maxPath(root->left, maxi));
        int rightpath = max(0,maxPath(root->right, maxi));
        maxi = max(maxi, root->val+leftpath+rightpath);
        return root->val + max(leftpath, rightpath);
    }
    int maxPathSum(TreeNode* root) {
        int maxi = INT_MIN;
        maxPath(root, maxi);
        return maxi;
    }
};