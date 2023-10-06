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
public: //access modifier
void help(TreeNode*root,vector<int>&v)// here creating a function help and taking root as a //type TreeNode* and defining the address of  vector. we are using vector here because we //have to store the result in it. 
{
    if(root==NULL)return;// if there is no root then simply return
    if(root->left==NULL && root->right==NULL)//now check if root has its left and the right //subtree and which is also Null means there is no subtrees either in left or right of the //root 
    {
        v.push_back(root->val);//now if both are null then push the value of root into vector
    }
    if(root->left)// if root has its left subtree then
    {
        help(root->left,v);//call the function recursively and insert the value of root->left into the vector 
    }
    if(root->right)//do the same for right subtree insert  the value into vector again
    {
        help(root->right,v);
    }
}
    bool leafSimilar(TreeNode* root1, TreeNode* root2) { //main function
        vector<int>v1,v2; //declare two vector as we have to store the value of two trees not one
        help(root1,v1); //calling the help function from main function for the first tree
        help(root2,v2);//again calling for second tree
        if(v1==v2) return true; //check is the value of both the vector is same then return true else return false..
        return false;
    }
};