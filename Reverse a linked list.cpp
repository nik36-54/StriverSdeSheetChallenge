#include <bits/stdc++.h> 
/****************************************************************

    Following is the class structure of the LinkedListNode class:

    template <typename T>
    class LinkedListNode
    {
    public:
        T data;
        LinkedListNode<T> *next;
        LinkedListNode(T data)
        {
            this->data = data;
            this->next = NULL;
        }
    };

*****************************************************************/

LinkedListNode<int> *reverseLinkedList(LinkedListNode<int> *head) 
{
    if(head==NULL || head->next==NULL)return head;
    LinkedListNode<int> *curr=head;
    LinkedListNode<int> *prev=NULL;
    while(curr!=NULL)
    {
        LinkedListNode<int> *p=curr->next;
        curr->next=prev;
        prev=curr;
        curr=p;
    }
    return prev;
    
}

// O(n) time ......O(1) space