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
       if(!root)
        return true;

       int count=1;
       int brother[100]={0};//记录每一个深度有多少个兄弟

       queue<TreeNode *> que;
       que.push(root);
       brother[1]=1;
       int depth=1;

       while(que.size()){
        for(int i=1;i<=brother[depth];i++){
           TreeNode* p=que.front();
           que.pop();
           if(p->left){
            que.push(p->left);
            count++;
            brother[depth+1]++;
            if(depth!=1&&count<=(pow(2,depth)-1))
                return false;
           }
           if(p->right){
            que.push(p->right);
            count++;
            brother[depth+1]++;
            if(depth!=1&&count<=(pow(2,depth)-1))
                return false;
           }
        }
        depth++;
       }
       return true;
    }
};
