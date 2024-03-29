/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> neighbors;
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};
*/

class Solution {
public:
    void dfs(Node* curr,Node* node,vector<Node *>&visited){
        
        visited[node->val]=node;
        for(auto ele:curr->neighbors){
            if(visited[ele->val]==NULL){
                Node* newnode = new Node(ele->val);
                (node->neighbors).push_back(newnode);
                dfs(ele,newnode,visited);
            }
            else
                (node->neighbors).push_back(visited[ele->val]);
        }
        
    }
    Node* cloneGraph(Node* node) {
        // checking first of all node is NULL or NOT
        if(node==NULL)return NULL;
        
        
        
        // Making Visited Vector to track and one copy of node to clone the original node
        // Marking as first node as visited 
        vector<Node *>visited(1000,NULL);
        Node* copy = new Node(node->val);
        visited[node->val]=copy;
        
        //Traversing using dfs algo
        //Checking original node neighbors
        // if visited then pushing back directly
        // else traversing using dfs algo
        
        for(auto curr:node->neighbors){
            if(visited[curr->val]==NULL){
                Node* newnode = new Node(curr->val);
                (copy->neighbors).push_back(newnode);
                dfs(curr,newnode,visited);
            }
            else
                (copy->neighbors).push_back(visited[curr->val]);
        }
        return copy;
    }
};