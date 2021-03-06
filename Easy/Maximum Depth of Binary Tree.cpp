/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    int maxDepth(TreeNode* root,int depth=0) {
        if(root==NULL)
            return depth;
        return max(maxDepth(root->left,depth+1),maxDepth(root->right,depth+1));
    }
};
