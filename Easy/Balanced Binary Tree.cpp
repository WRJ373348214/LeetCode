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
    bool isBalanced(TreeNode* root) {
        if(!root||(root->left==NULL&&root->right==NULL))
            return true;
        if(root->left==NULL){
            if(root->right->left==NULL&&root->right->right==NULL)
                return true;
            else
                return false;
        }
        if(root->right==NULL){
            if(root->left->left==NULL&&root->left->right==NULL)
                return true;
            else
                return false;
        }
        return isBalanced(root->left)&&isBalanced(root->right);
    }
};
