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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> result;
        if(!root){
            return result;
        }
        queue<TreeNode*> q;
        q.push(root);
        bool lefttoright=true;
        while(!q.empty()){
            int levelsize=q.size();
            deque<int>currlevel;
            for(int i=0;i<levelsize;i++){
                TreeNode* node=q.front();
                q.pop();
                if(lefttoright){
                    currlevel.push_back(node->val);
                }
                else{
                    currlevel.push_front(node->val);
                }
                if(node->left){
                    q.push(node->left);
                }
                if(node->right){
                    q.push(node->right);
                }
            }
            result.push_back(vector<int>(currlevel.begin(),currlevel.end()));
            lefttoright =!lefttoright;
        }
        return result;
    }
};
