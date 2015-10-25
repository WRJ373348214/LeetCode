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
    typedef vector<int>::iterator Iter;
    typedef vector<int> Vec;
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
            if(preorder.size()==0)
                return NULL;
            Iter index=preorder.begin();
            return createTree(inorder.begin(),inorder.end(),index,preorder);
    }
    TreeNode* createTree(Iter first,Iter last,Iter &index_of_pre,const Vec &preorder){

        TreeNode* node=new TreeNode(*index_of_pre);

        Iter index=find(first,last,*index_of_pre);
        index_of_pre++;

        if(index_of_pre!=preorder.end()&&find(first,index,*index_of_pre)!=index)
            node->left=createTree(first,index,index_of_pre,preorder);
        else
            node->left=NULL;

        if(index_of_pre!=preorder.end()&&find(index+1,last,*index_of_pre)!=last)
            node->right=createTree(index+1,last,index_of_pre,preorder);
        else
            node->right=NULL;

        return node;
    }
};
