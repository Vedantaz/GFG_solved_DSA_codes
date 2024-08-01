bool res = false;
    //Function to check if S is a subtree of tree T.
    bool match(Node* t, Node* s){
        if(t != NULL && s != NULL){
            bool a = match(t->left, s->left);
            bool b = match(t->right, s->right);
            
            if((t->data == s->data) && a && b){
                return true;
                
            }
            else return false;
            
        }
        if(t == NULL && s == NULL) return true;
        else return false;
        
    }
    void inOrder(Node* t, Node* s){
        if(t != NULL){
            inOrder(t->left, s);
            
            bool ans = match(t,s);
            if(ans){res = ans;}
            
            inOrder(t->right, s);
        }
        
    }
    bool isSubTree(Node* t, Node* s) 
    {
        // Your code here
        inOrder(t,s);
        return res;
        
    }