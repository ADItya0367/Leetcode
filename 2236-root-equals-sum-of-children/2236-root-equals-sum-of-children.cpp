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
    bool checkTree(TreeNode* root) {
        int v1;
      if(root!=NULL)
      {
          v1=root->val;
      }
        int sum=root->left->val+root->right->val;
        if(v1==sum)
        {
return true;
        }
        else
        {
            return false;
        }
    }
};

//QUESTION- We are given the root of a binary tree containing exactly thtree nodes only
//--the root
//--left child
//--right child
