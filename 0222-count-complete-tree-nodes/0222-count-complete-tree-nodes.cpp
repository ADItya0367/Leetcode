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
void inorder(TreeNode* root,int &i)
{
    if(root==NULL)
    {
        return;
    }
    inorder(root->left,i);
    i++;
    inorder(root->right,i);
}
    int countNodes(TreeNode* root) {
        int i=0;
        inorder(root,i);
        return i;
      
    }
};