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

LinkedListNode<int>* removeKthNode(LinkedListNode<int> *head, int k)
{
    // USING LENGTH
    // if(head==NULL || k==0)return head;
 
    // LinkedListNode<int>* curr=head;
    // int len=0;
    // while(curr!=NULL)
    // {
    //     len++;
    //     curr=curr->next;
    // }
    // if(len==k)return head->next;
    
    // int n=len-k-1;
    // curr=head;
    // while(n--)
    // {
    //     curr=curr->next;
    // }
    
    //     if(curr->next->next==NULL)
    //     {
    //         LinkedListNode<int>* pre=curr->next;
    //         curr->next=NULL;
    //         delete(pre);
    //     }
    //     else{
    //     LinkedListNode<int>* prev=curr->next;
    //     curr->next=curr->next->next;
    //     delete(prev);
    //     }
    
    // return head;

    // without  length


    if(head==NULL || k==0)return head;
    LinkedListNode<int> *fast=head,*slow=head;
    while(k-->0)
       fast=fast->next;
    
    if(!fast)return head->next;
    
    while(fast->next!=NULL)
    {
        fast=fast->next;
        slow=slow->next;
    }
    LinkedListNode<int>* temp=slow->next;
    slow->next=slow->next->next;
    delete(temp);
    
    return head;
}