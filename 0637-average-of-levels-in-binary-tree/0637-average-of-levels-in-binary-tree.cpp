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
    vector<double> averageOfLevels(TreeNode* root) {
      std::queue<TreeNode*>q;
      vector<double>average;
      q.push(root);
      double total;
      int qsize;
      while(q.size()>0)
      {
          total=0;
          qsize=q.size();

          for(int i=0;i<qsize;i++)
          {
              
          TreeNode* tree=q.front();
          total+=tree->val;
          if(tree->left !=NULL)
          {
              q.push(tree->left);
          }
          if(tree->right !=NULL)
          {
              q.push(tree->right);
          }
             q.pop();
      }
      total=total/qsize;
      average.push_back(total);
      }
       return average;
    }
};

//Question: the root of binary tree 
// we have to do level order traversal and at each level we have to do the sum of nodes at the particular level and we have to find the average of the value ...hope so we know how to find the average .
// these average values should be in array form
