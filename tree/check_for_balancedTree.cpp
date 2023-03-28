
// 10 20 30 40 60 N N   = true

// 1 2 3 = false;
 int height( Node* root ){
        
        if(root == NULL) return 0;   
        
        int left = height(root->left);
        int right = height(root->right);
        
        if(abs(left - right) > 1) return -1;
        if(left == -1 || right == -1) return -1;
                
        return 1+max(left, right);
        
        
    }
    
    bool isBalanced(Node *root)
    {
        
        int res = height(root);
        
        if( res < 0 ) return false;
        return true;        
        
    }