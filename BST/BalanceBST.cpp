// https://leetcode.com/problems/balance-a-binary-search-tree/description/

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
vector<int> v;
TreeNode *solve1(int start, int end){
    if(start>end){
        return NULL;
    }
    int mid = (start+end)/2;
    TreeNode *root = new TreeNode(v[mid]);
    root->left = solve1(start, mid-1);
    root->right = solve1(mid+1, end);
    return root;
}
void solve(TreeNode *root){
        if(root==NULL){
            return;
        }
        solve(root->left);
        v.push_back(root->val);
        solve(root->right);
        return;
    }
    TreeNode* balanceBST(TreeNode* root) {
        solve(root);
	    int start=0;
	    int end = v.size()-1;
	    return solve1(start, end);
    }
};