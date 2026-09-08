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
        vector<vector<int>> ans;
        queue<TreeNode*> q;
        if(root==NULL) return ans;
        q.push(root);
        bool isreverse=true;
        while(!q.empty()){
            int n=q.size();
            vector<int> travers;

            for(int i=0;i<n;i++){
               TreeNode* node=q.front();
               q.pop();
               if(node->left!=NULL) q.push(node->left);
               if(node->right!=NULL) q.push(node->right);
               travers.push_back(node->val);
            }
           if(isreverse){
           isreverse=!isreverse;
           }else{
            reverse(travers.begin(),travers.end());
            isreverse=!isreverse;
           }
            ans.push_back(travers);
        }
        return ans;
    }
};