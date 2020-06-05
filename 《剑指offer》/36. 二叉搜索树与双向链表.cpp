class Solution {
public:
    void inOrder(Node* root,Node* &head,Node* &pre){
        if(root==NULL) return;
        inOrder(root->left,head,pre);
        if(head==NULL){
            pre=root;
            head=root;
        }
        else{
            pre->right=root;
            root->left=pre;
            pre=root;
        }
        inOrder(root->right,head,pre);
    }
    Node* treeToDoublyList(Node* root) {
        if(root==NULL) return NULL;
        Node *head=NULL,*pre=NULL;
        inOrder(root,head,pre);
        head->left=pre;
        pre->right=head;
        return head;
    }
};
