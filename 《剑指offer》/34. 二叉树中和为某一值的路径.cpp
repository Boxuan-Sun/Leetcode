class Solution {
public:
    void dfs(TreeNode* root,vector<vector<int>>&path,vector<int>& temp,int sum){
        if(root==NULL) return;
        if(root->left==NULL&&root->right==NULL){
            if(sum==root->val){
                temp.push_back(root->val);
                path.push_back(temp);
                temp.pop_back();
                return;
            }
            else{
                return;
            }
        }
        temp.push_back(root->val);
        dfs(root->left,path,temp,sum-(root->val));
        dfs(root->right,path,temp,sum-(root->val));
        temp.pop_back();
    }
    vector<vector<int>> pathSum(TreeNode* root, int sum) {
        vector<vector<int>> path;
        if(root==NULL) return path;
        vector<int> temp;
        dfs(root,path,temp,sum);
        return path;
    }
};
