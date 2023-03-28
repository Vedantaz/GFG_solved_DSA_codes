// 1 2 N
// 2 N 1

// 1 2 3 
// 1 3 2 

    void inOrder(Node* r, vector<int> &res){
        if(r == NULL) return ;
        inOrder(r->left, res);
        res.push_back(r->data);
        inOrder(r->right, res);
        
        
    }
    void preOrder(Node* r, vector<int> &res){
        if(r == NULL) return ;
        res.push_back(r->data);
        inOrder(r->left, res);
        inOrder(r->right, res);
        
        
    }
    bool isIdentical(Node *r1, Node *r2)
    {
        //Your Code here
        // to determine the identical behaviour 
        // find if their inOrder and preOrder traversal are same 
        // if they are , then they are identical else not.
        
        if(r1->data != r2->data) return false;
        vector<int> res, ans;
        inOrder(r1, res);
        inOrder(r2, ans);
        
        if(res == ans){
            preOrder(r1, res);
            preOrder(r2, ans);+
            if(res == ans) return true;
        }
        else return false;
        
    }