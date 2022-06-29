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

bool findPath(TreeNode<int> *root,vector<int>& p,int n)
{
    if(root==NULL)return false;
    p.push_back(root->data);
    if(root->data==n)return true;
    
    if((root->left && findPath(root->left,p,n)) || (root->right && findPath(root->right,p,n)))
        return true;
    
    p.pop_back();
    return false;
}

int lowestCommonAncestor(TreeNode<int> *root, int x, int y)
{
	vector<int> p1,p2;
    if(findPath(root,p1,x)==false || findPath(root,p2,y)==false)
        return -1;
    
    int i;
    for(i=0;i<p1.size() && i<p2.size();i++)
        if(p1[i]!=p2[i])
            break;
    
    return p1[i-1];
}