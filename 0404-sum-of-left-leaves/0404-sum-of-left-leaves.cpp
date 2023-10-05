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
    int sumOfLeftLeaves(TreeNode* root) {
        int sum=0;
        queue<TreeNode*>q;
        q.push(root);
      
        while(!q.empty())
        {    TreeNode* curr=q.front();
              q.pop();
            if(curr->left && (curr->left->left==NULL  && curr->left->right==NULL))
            {
                sum+=curr->left->val;
            }
            if(curr->left) q.push(curr->left);
            if(curr->right)q.push(curr->right);
        }
          return sum;
        
    }
};
// we have to find the sum of leaf nodes so what we can do?
// first create an queue q
// insert the root value into the front of the queue
// after inserting the root into queue go to the left subtree and check if the leftsubtree's left if it is NULL && leftsubtree's right is NULL and if it is so then use a variable sum and store the leftsubtree->value + leftsubtree's right value in the sum and return the sum at last