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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<vector<int>> sta;
        if(!root)
            return  sta;
        queue<TreeNode*> que;
        que.push(root);

        int brother[5000]={0};//用来记录每一深度有几个兄弟
        brother[1]=1;
        int depth=1;
        while(que.size()){
            vector<int> t;
            for(int i=0;i<brother[depth];i++){
                TreeNode* p=que.front();
                que.pop();
                t.push_back(p->val);
                if(p->left){
                    que.push(p->left);
                    brother[depth+1]++;
                }
                if(p->right){
                    que.push(p->right);
                    brother[depth+1]++;
                }
            }
            if(t.size()){
                vector<vector<int>>::iterator it=sta.begin();
                sta.insert(it,t);
            }
            depth++;
        }
        return sta;
    }
};
