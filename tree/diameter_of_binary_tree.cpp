


// 1 2 3 = 3
// 1 2 3 4 5 6 7 8 9  = 6
// 10 20 30 40 50 60 70 80 90  = 6

int d = 0;
    int height(Node* root){
        
        
        if(root == NULL) return 0;   
        int left = height(root->left);
        int right = height(root->right);
        
        d = max(d, left+right+1);
        return 1+max(left, right);
        

    }
        
    
    int diameter(Node* root) {
        // Your code here
        
        if(root == NULL ) return 1;
        
        height(root);
        return d;
        
    }