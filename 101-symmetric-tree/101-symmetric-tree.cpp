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
    bool isSymmetric(TreeNode* root) {
        // partition the root into mirror form
        return (root==NULL) || check(root->left,root->right);
    }
    bool check(TreeNode* left,TreeNode* right){
        // checking the root to its center 
        // checking the leaves across left->right=right->left and let->left=right->right
        if(left==NULL || right==NULL)
            return left==right;
        if(left->val!=right->val)
            return false;
        return check(left->left,right->right) && check(left->right,right->left);
    }
};