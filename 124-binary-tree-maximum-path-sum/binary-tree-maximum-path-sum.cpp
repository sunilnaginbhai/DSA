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
    int findHeightsum(TreeNode* root,int& maxsum){
         if(root==nullptr){
            return 0;
        }
        int lsum=max(0,findHeightsum(root->left,maxsum) );
        int rsum=max(0,findHeightsum(root->right,maxsum) );

        maxsum=max(maxsum,(root->val) + lsum + rsum);
        return (root->val) + max(lsum,rsum);
    }

    int maxPathSum(TreeNode* root) {
        int maxsum=INT_MIN;
        findHeightsum(root,maxsum);
        return maxsum;
    }
};


  