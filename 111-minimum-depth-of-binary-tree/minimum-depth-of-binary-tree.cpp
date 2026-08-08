/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    int minDepth(TreeNode* root) {

        if (root == NULL)
            return 0;

        int lh = minDepth(root->left);
        int rh = minDepth(root->right);
         
        int mini=1 + min(lh, rh);
        int maxi=1 + max(lh, rh); 
        if(mini==1) return maxi;

        return mini;
    }
};