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
    void call(TreeNode* root,vector<int>&ans,int maxi){
        if(!root){
            return ;
        }
        if(maxi<=root->val){
            maxi=root->val;
            ans.push_back(root->val);
        }
        call(root->left,ans,maxi);
        call(root->right,ans,maxi);
    }
    int goodNodes(TreeNode* root) {
        int maxi = INT_MIN;
        vector<int>ans;
        call(root,ans,maxi);
        return ans.size();
    }
};