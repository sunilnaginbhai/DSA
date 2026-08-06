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

    int findHeight(TreeNode* root,int& daimeter){
         if(root==nullptr){
            return 0;
        }
        int lh=findHeight(root->left,daimeter);
        int rh=findHeight(root->right,daimeter);

        daimeter=max(daimeter,lh+rh);

        return max(lh,rh)+1;
    }

    int diameterOfBinaryTree(TreeNode* root) {
    
       int daimeter=0;       
       findHeight(root,daimeter);
        return daimeter;
    }

};