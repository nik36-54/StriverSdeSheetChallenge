#include<bits/stdc++.h>
/*
    ----------------- Binary Tree node class for reference -----------------

    template <typename T>
    class BinaryTreeNode {
        public : 
            T data;
            BinaryTreeNode<T> *left;
            BinaryTreeNode<T> *right;
            BinaryTreeNode<T> *next;

            BinaryTreeNode(T data) {
                this -> data = data;
                left = NULL;
                right = NULL;
                next = NULL;
            }
    };
*/

void connectNodes(BinaryTreeNode<int>* root) {
    if(root==NULL)return;
    queue<BinaryTreeNode<int>*> q;
    q.push(root);
    
    while(!q.empty())
    {
        int n=q.size();
        BinaryTreeNode<int>* prev,*curr;
        for(int i=0;i<n;i++)
        {
            curr=q.front();
            if(i==0)
                q.front()->next=NULL;
            else
                q.front()->next=prev;
            
            q.pop();
            if(curr->right)q.push(curr->right);
            if(curr->left)q.push(curr->left);
            prev=curr;
            
        }
    }
    return;
}