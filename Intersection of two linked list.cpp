#include <bits/stdc++.h> 
/****************************************************************
 
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

*****************************************************************/

int findIntersection(Node *fHead, Node *sHead)
{
    int n=0,m=0;
    Node *curr1=fHead,*curr2=sHead;
    while(curr1!=NULL)
    {
        n++;
        curr1=curr1->next;
    }
    while(curr2!=NULL)
    {
        m++;
        curr2=curr2->next;
    }
    
    curr1=fHead;
    curr2=sHead;
    if(n>m)
    {
        int k=n-m;
        while(k--)
            curr1=curr1->next;
    }
    else if(n<m)
    {
        int k=m-n;
        while(k--)
            curr2=curr2->next;
    }
    
    while(curr1!=NULL && curr2!=NULL)
    {
        if(curr1==curr2)
            return curr1->data;
        curr1=curr1->next;
        curr2=curr2->next;
    }
    return -1;
}