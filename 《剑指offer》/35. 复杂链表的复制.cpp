class Solution {
public:
    void CloneNodes(Node* head){
        if(head==NULL) return;
        Node* p=head;
        while(p!=NULL){
            Node* pNode=new Node(p->val);
            pNode->next=p->next;
            p->next=pNode;
            p=pNode->next;
        }
    }    

    void ConnectSiblingNodes(Node* head){
        if(head==NULL) return;
        Node* p=head;
        while(p!=NULL){
            Node* pNode=p->next;
            if(p->random!=NULL){
                pNode->random=p->random->next;
            }
            p=pNode->next;
        }
    }

    Node* ReconnectNodes(Node* head){
        if(head==NULL) return NULL;
        Node *pNode=head;
        Node* pClonedHead=NULL;
        Node* pClonedNode=NULL;
        if(pNode!=NULL){
            pClonedHead=pClonedNode=pNode->next;
            pNode->next=pClonedNode->next;
            pNode=pNode->next;
        }
        while(pNode!=NULL){
            pClonedNode->next=pNode->next;
            pClonedNode=pClonedNode->next;
            pNode->next=pClonedNode->next;
            pNode=pNode->next;
        }
        return pClonedHead;
    }


    Node* copyRandomList(Node* head) {
        CloneNodes(head);
        ConnectSiblingNodes(head);
        return ReconnectNodes(head);
    }
};
