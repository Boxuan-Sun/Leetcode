class Solution {
public:
    void level(TreeNode* root,vector<int>& res){
        if(root==NULL) return;
        queue<TreeNode*> qu;
        qu.push(root);
        while(!qu.empty()){
            TreeNode* now=qu.front();
            qu.pop();
            res.push_back(now->val);
            if(now->left) qu.push(now->left);
            if(now->right) qu.push(now->right); 
        }
    }
    vector<int> levelOrder(TreeNode* root) {
        vector<int> res;
        if(root==NULL) return res;
        level(root,res);
        return res;
    }
};

