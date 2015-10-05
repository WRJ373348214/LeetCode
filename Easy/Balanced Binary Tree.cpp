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
    bool check(TreeNode* root,int& dep){
        if(root==NULL){
            dep=0;
            return true;
        }
        int leftDep,rightDep;
        if(!check(root->left,leftDep))
            return false;
        if(!check(root->right,rightDep))
            return false;
        dep=max(leftDep,rightDep)+1;

        return (abs(leftDep-rightDep)<=1);
    }
    bool isBalanced(TreeNode* root) {
     int dep=0;
     return check(root,dep);
    }
};
