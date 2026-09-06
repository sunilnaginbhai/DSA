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
   int maxi=0;
    int solve(TreeNode* root){
        if(root==NULL){
            return maxi; 
        }

        int leftdep=solve(root->left);
        int rightdep=solve(root->right);
        return max(max(leftdep,rightdep),maxi) + 1;
    }
    int maxDepth(TreeNode* root) {
        return solve(root);
    }
};