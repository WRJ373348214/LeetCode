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
    vector<string> paths;
    vector<string> binaryTreePaths(TreeNode* root) {
        string path;
        if(root){
            stringstream s;
            s<<root->val;
            s>>path;
        if(!root->left&&root->right)
            paths.push_back(path);
        if(root->left)
            pathDFS(path,root->left);
        if(root->right)
            pathDFS(path,root->right);
        }
        return paths;
    }
    void pathDFS(string path,TreeNode* root){
        stringstream s;
        string str;
        s<<root->val;
        s>>str;
        path+="->"+str;
        if(!root->left&&root->right)
            paths.push_back(path);
        if(root->left)
            pathDFS(path,root->left);
        if(root->right)
            pathDFS(path,root->right);

    }
};
