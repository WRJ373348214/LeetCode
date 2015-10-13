/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

/* Version:1.0,思维不够清晰，架构不够有条理、完美,几经修改才解决很多BUG
class Solution {
public:
    bool hasPathSum(TreeNode* root, int sum) {
        if(!root)
            return false;
        sum-=root->val;
        if(!sum){
           if(root->left==NULL&&root->right==NULL)
                return true;
        }

        bool left=false,right=false;
        if(root->left)
            left=hasPathSum(root->left,sum);
        if(root->right)
            right=hasPathSum(root->right,sum);
        if(left||right)
            return true;

        return false;
    }
};                                                   */
//Version:2.0
bool hasPathSum(TreeNode* root, int sum) {
    //第一步:终结（意外）情况考虑
    if(!root)
        return false;
    //第二步进行每次操作
    sum-=root->val;
    //第三步:符合判断
    if(root->left==NULL && root->right==NULL && !sum)
        return true;
    //第四步，加深深度
    return hasPathSum(root->left,sum)||hasPathSum(root->right,sum);
}
