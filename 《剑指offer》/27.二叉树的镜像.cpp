class Solution {
public:
    TreeNode* mirrorTree(TreeNode* root) {
        if(root==NULL) return NULL;
        mirrorTree(root->left);
        mirrorTree(root->right);
        TreeNode* tmp=root->left;
        root->left=root->right;
        root->right=tmp;
        return root;
    }
};
