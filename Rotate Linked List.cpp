#include <bits/stdc++.h> 
/********************************

    Following is the class structure of the Node class:
    
    class Node
    {
    	public:
    	    int data;
    	    Node *next;
    	    Node(int data)
    	    {
    	        this->data = data;
    	        this->next = NULL;
    	    }
    };

********************************/

Node *rotate(Node *head, int k) {
     if(k==0)return head;
   
    Node *curr=head;
    int n=0;
    while(curr!=NULL)
    {
        n++;
        curr=curr->next;
    }
    k=k%n;
    if(k==0)return head;
    
    curr=head;
    for(int i=1;i<n-k;i++)
        curr=curr->next;
    
    Node *temp=curr->next;
    curr->next=NULL;
    Node *prev=temp;
    Node *cur=prev;
    while(cur->next!=NULL)
        cur=cur->next;
    
    delete(cur->next);
    cur->next=head;
    return prev;
}