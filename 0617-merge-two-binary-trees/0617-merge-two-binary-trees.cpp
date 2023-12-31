/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    TreeNode* mergeTrees(TreeNode* root1, TreeNode* root2) {
       
        if(root1==NULL || root2==NULL)
        {
           return root1?root1:root2;
        }
                root1->val+=root2->val;
                root1->left=mergeTrees(root1->left,root2->left);
                root1->right=mergeTrees( root1->right,root2->right);
        return root1;
    }
};
//two  binary tree root are given root 1 and root 2
// we have to overlap the trees in such a way that if two node overlap on each other then add their value else print the combination of both tree . 