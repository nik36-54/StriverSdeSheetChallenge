void deleteNode(LinkedListNode<int> * node) {
    LinkedListNode<int>* curr=node;
    swap(curr->data,curr->next->data);
        LinkedListNode<int>* rem=curr->next->next;
        delete(curr->next);
        curr->next=rem;
        return;
    
}

// O(1) time ....O(1) space