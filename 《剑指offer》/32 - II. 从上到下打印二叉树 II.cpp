class Solution {
public:
    void level(TreeNode* root,vector<vector<int>>& res,vector<int>& temp){
        if(root==NULL) return;
        queue<TreeNode*> qu;
        qu.push(root);
        TreeNode *first=root,*last=root;
        while(!qu.empty()){
            TreeNode* now=qu.front();
            first=now;
            qu.pop();
            temp.push_back(now->val);
            if(now->left) qu.push(now->left);
            if(now->right) qu.push(now->right);
            if(first==last){
                res.push_back(temp);
                temp.clear();
                last=qu.back();
            }
        }
    }
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<int> temp;
        vector<vector<int>> res;
        if(root==NULL) return res;
        level(root,res,temp);
        return res;
    }
};
