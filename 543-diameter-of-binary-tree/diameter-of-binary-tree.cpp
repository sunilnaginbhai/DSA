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

    int findHeight(TreeNode* root){
         if(root==nullptr){
            return 0;
        }
        int lh=findHeight(root->left);
        int rh=findHeight(root->right);

        
        return max(lh,rh)+1;
    }

    int maxi=0;
    int diameterOfBinaryTree(TreeNode* root) {
        if(root==nullptr){
            return 0;
        }

        int lheight=findHeight(root->left);
        int rheight=findHeight(root->right);
        
        maxi=max(maxi,lheight+rheight);
       
        diameterOfBinaryTree(root->left);
        diameterOfBinaryTree(root->right);
    return maxi;
    }

};