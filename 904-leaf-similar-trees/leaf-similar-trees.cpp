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
vector<int> tree1;
vector<int> tree2;
    void FindLeaf(TreeNode* root,vector<int> &tree){
        if(root==NULL){
            return;
        }
        if(root->left==NULL && root->right==NULL){
            tree.push_back(root->val);
            return;
        }
        FindLeaf(root->left,tree);
        FindLeaf(root->right,tree);
    }
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        FindLeaf(root1,tree1);
        FindLeaf(root2,tree2);
         if(tree1==tree2){
            return true;
         }
         return false;
    }
};