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
        vector<vector<int>> ans;
        if(root==nullptr) return ans;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            int levelsize = q.size();
            vector<int> currentlevels;
            for(int i=0;i<levelsize;i++){
                TreeNode* currentNode=q.front();
                q.pop();
                currentlevels.push_back(currentNode->val);
                if(currentNode->left!=nullptr){
                    q.push(currentNode->left);
                }
                if(currentNode->right!=nullptr){
                    q.push(currentNode->right);
                }
            }
            ans.push_back(currentlevels);
        }
        return ans;
    }
};
