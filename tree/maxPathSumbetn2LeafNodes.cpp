// 5 N 6 -5 5
// my wrong code > not completed yet..
 int maxSum(Node* root, int &res)
    {
        // code here
        
        if(root == NULL) return 0;
        if(root->left==NULL && root->right==NULL) return root->data;
        
        
        int l = maxSum(root->left, res);
        int r = maxSum(root->right, res);
        
        if(root->left && root->right){
            res = max(res, l+r+root->data);
            
            return max(l, r) + root->data;
            
        }
        
        if(root->left){
            return l+root->data;
        }
        return r+root->data;
        
    }
    int maxPathSum(Node* root){
        int res = INT_MIN;
        int ans = maxSum(root, res);
        if(res == INT_MIN){
            return ans;
        }
        return res;
        
    }