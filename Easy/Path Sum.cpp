/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

/* Version:1.0,˼ά�����������ܹ���������������,�����޸ĲŽ���ܶ�BUG
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
    //��һ��:�սᣨ���⣩�������
    if(!root)
        return false;
    //�ڶ�������ÿ�β���
    sum-=root->val;
    //������:�����ж�
    if(root->left==NULL && root->right==NULL && !sum)
        return true;
    //���Ĳ����������
    return hasPathSum(root->left,sum)||hasPathSum(root->right,sum);
}
