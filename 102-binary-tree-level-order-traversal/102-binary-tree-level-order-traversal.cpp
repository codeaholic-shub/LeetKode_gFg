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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>>v1;
        if(root==NULL)return v1;
        
        queue<TreeNode *>q;
        q.push(root);
        while(!q.empty()){
            vector<int>v2;
            int n  = q.size();
            while(n--){
                TreeNode *temp = q.front();
                v2.push_back(temp->val);
                q.pop();
                
                if(temp->left)q.push(temp->left);
                if(temp->right)q.push(temp->right);
            }
            v1.push_back(v2);
        }
        return v1;
    }
};