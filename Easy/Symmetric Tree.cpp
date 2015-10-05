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
    bool check(TreeNode* left,TreeNode* right){
        if(left==NULL&&right==NULL)
            return true;
        if(left==NULL||right==NULL)
            return false;
        return left->val==right->val&&check(left->left,right->right)&&check(right->left,left->right);
    }
    bool isSymmetric(TreeNode* root) {
        if(!root)
            return true;
        return check(root->left,root->right);
    }
};
