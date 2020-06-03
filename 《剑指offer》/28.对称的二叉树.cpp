class Solution {
public:
    bool judge(TreeNode* A,TreeNode* B){
        if(A==NULL&&B==NULL) return true;
        if(A==NULL||B==NULL) return false;
        if(A->val==B->val){
            return judge(A->left,B->right)&&judge(A->right,B->left);
        }
        else{
            return false;
        }
    }
    bool isSymmetric(TreeNode* root) {
        if(root==NULL) return true;
        //if(root->left==NU)
        return judge(root->left,root->right);
    }
};
