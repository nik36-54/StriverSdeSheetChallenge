Node *findMiddle(Node *head) {
    if(head==NULL)return NULL;
    Node *slow=head,*fast=head;
    while(fast!=NULL && fast->next!=NULL)
    {
        slow=slow->next;
        fast=fast->next->next;
    }
    return slow;
}

// O(N/2) time O(1) space
// Two pointer slow , fast