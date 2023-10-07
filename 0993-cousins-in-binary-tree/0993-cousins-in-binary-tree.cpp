class Solution {
public:
    

    bool isCousins(TreeNode* root, int x, int y) {
        int i,j,k,c=0;
        int d1,d2;
        TreeNode* p1=NULL;TreeNode*p2=NULL;
        queue<TreeNode*>q;
        vector<int>ans;

        if(!root)
        return 0;
        q.push(root);

        while(!q.empty()){
            int levelsize=q.size();

            while(levelsize-->0){
                TreeNode* curr=q.front();
                q.pop();

                if(curr->left){
                    if(curr->left->val==x)
                    p1=curr;
                    
                    if(curr->left->val==y)
                        p2=curr;
                     
                    q.push(curr->left);
                }

                if(curr->right){
                    if(curr->right->val==x)
                    p1=curr;
                    
                    if(curr->right->val==y)
                        p2=curr;
                     
                    q.push(curr->right);
                }

                if(p1!=NULL and p2!=NULL){
                    if(p1!=p2)
                    return 1;
                    }
            }
            p1=NULL;
            p2=NULL;
            
            
        }

        
        return 0;
    }
};      