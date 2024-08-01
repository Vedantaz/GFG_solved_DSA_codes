class Solution{
    public:
    int height(Node * root){
        if(!root) return 0;
        int lh = height(root->left);
        int rh = height(root->right);
        if(lh == -1 || rh == -1) return -1;
        
        if(abs(lh-rh)>1) return -1;
        
        return max(lh,rh)+1;
    }
    //Function to check whether a binary tree is balanced or not.
    bool isBalanced(Node *root)
    {
        //  Your Code here
        if(height(root) == -1) return false;
        else return true;
        
    }
};