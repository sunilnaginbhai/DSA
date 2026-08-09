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
    int sum=0;
    int subtreeSum(TreeNode* root){
        if (root == NULL)
            return 0;

        int leftSum = subtreeSum(root->left);
        int rightSum = subtreeSum(root->right);

        sum+=abs(leftSum - rightSum);
        return root->val + leftSum + rightSum;
    }

    int findTilt(TreeNode* root) {
       subtreeSum(root);
       return sum;
    }
};