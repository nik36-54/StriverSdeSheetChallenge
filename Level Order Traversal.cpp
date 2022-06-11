vector<int> getLevelOrder(BinaryTreeNode<int>*root)
{
    vector<int> ans;
    if(root==NULL)return ans;
 
    queue<BinaryTreeNode<int>*> q;
    q.push(root);
    while(!q.empty())
    {
            BinaryTreeNode<int>* curr=q.front();
            ans.push_back(curr->val);
            q.pop();
            
            if(curr->left!=NULL)
            q.push(curr->left);
            if(curr->right!=NULL)
            q.push(curr->right);
      
    }
    return ans;
}

//O(n) time ...O(n) space