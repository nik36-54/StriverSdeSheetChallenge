/************************************************************

    Following is the TreeNode class structure

    template <typename T>
    class TreeNode {
       public:
        T data;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T data) {
            this->data = data;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/
int res;

int solve(TreeNode<int>* root)
{
    if(root==NULL)return 0;
    int l=solve(root->left);
    int r=solve(root->right);
    res=max(res,1+l+r);
    return 1+max(l,r);
}

int diameterOfBinaryTree(TreeNode<int> *root)
{
	res=0;
    solve(root);
    return res-1;
    
}
