#include<bits/stdc++.h>
/*************************************************************
 
    Following is the Binary Tree node structure

    class BinaryTreeNode 
    {
    public : 
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data) {
            this -> data = data;
            left = NULL;
            right = NULL;
        }
    };

*************************************************************/
// int height(BinaryTreeNode<int>* root)
// {
//     if(root==NULL)return 0;
//     return 1+max(height(root->left),height(root->right));
// }
int solve(BinaryTreeNode<int>* root)
{
    if(root==NULL)return 0;
    int lh=solve(root->left);
    int rh=solve(root->right);
    
    if(lh==-1 || rh==-1)
        return -1;
    if(abs(lh-rh)<=1)return 1+max(lh,rh);
    return -1;
}

bool isBalancedBT(BinaryTreeNode<int>* root) {
//     if(root==NULL)return true;
//     int lh=height(root->left);
//     int rh=height(root->right);
//     int diff=abs(lh-rh);
//     return (diff<=1 && isBalancedBT(root->left) && isBalancedBT(root->right));
    
    if(root==NULL)return true;
    if(solve(root)!=-1)return true;
    return false;
    
    
    
}