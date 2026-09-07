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
    int HightTree(TreeNode* root){
        if(root==NULL){
            return 0;
        }
        int leftH=HightTree(root->left);
        int rightH=HightTree(root->right);
        int Hight=leftH+rightH;
        maxi=max(maxi,Hight);
        return max(leftH,rightH)+1;
    }
    int maxi=INT_MIN;
    int diameterOfBinaryTree(TreeNode* root) {
        HightTree(root);
        return maxi;
    }
};