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
    int minDepth(TreeNode* root) {
        if(!root)
            return 0;
        return min_depth(root,0);
    }
    int  min_depth(TreeNode* root,int depth){
        if(!root)
            return -1;
        if(root->left==NULL&&root->right==NULL)
            return depth;
        return Min(min_depth(root->left,depth+1),min_depth(root->right,depth+1));
    }
    int Min(int a,int b){
        if(a==-1)
            return b;
        if(b==-1)
            return a;
        return (a>b)?b:a;
    }
};
//其他人的思路，第一个类似，第二个用BFS思路挺好
/*
1.DFS
int minDepth(TreeNode *root) {
        if(root == NULL) return 0;
        int lmin = minDepth(root->left);
        int rmin = minDepth(root->right);
        if(lmin==0 && rmin == 0)
            return 1;
        if(lmin == 0)
            lmin = INT_MAX;
        if(rmin == 0)
            rmin = INT_MAX;
        return min(lmin, rmin)+1;
}
2. BFS iterative way
Since the aim is to find the shortest path, the BFS is better. A queue is used to store every node from the binary tree in depth order. Pop each node, if there exist its left and right tree store it, otherwise if it is left node, return its depth. To store each node and its depth.    */
