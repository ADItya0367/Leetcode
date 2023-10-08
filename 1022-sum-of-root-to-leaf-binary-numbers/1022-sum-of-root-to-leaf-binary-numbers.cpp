class Solution {
    int ans=0;
public:
    int sumRootToLeaf(TreeNode* root) {
        int buff = 0;
        dfs(root, buff);
        return ans;    
    }
    
    void dfs(TreeNode *root, int buff){
        buff = buff*2 + root->val;
        if(!root->left && !root->right){
            ans += buff;
            return;
        }
        if(root->left) dfs(root->left, buff);
        if(root->right) dfs(root->right, buff);
    }
};