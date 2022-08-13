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
    int widthOfBinaryTree(TreeNode* root) {
        //making queue with pair to track the rightmost and leftmost index
        //maxwidth = (rightmost-letmost+1)
        if(!root)return 0;
        int ans = 0;
        queue<pair<TreeNode*,int>>q;
        q.push({root,0});
        while(!q.empty()){
            int leftMost=0,rightMost=0;
            int currMin = q.front().second;
            int s = q.size();
            for(int i=0;i<s;i++){
                int currId = q.front().second-currMin;
                TreeNode* node = q.front().first;
                q.pop();
                if(i==0)leftMost=currId;
                if(i==s-1)rightMost=currId;
                if(node->left){
                    q.push({node->left,(long long)currId*2+1});
                }
                if(node->right){
                    q.push({node->right,(long long)currId*2+2});
                }
            }
            ans=max(ans,rightMost-leftMost+1);
        }
        return ans;
    }
};