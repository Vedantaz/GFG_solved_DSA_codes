// 4 10 N 5 5 N 6 7 N 8 8 N 8 11 N 3 4 N 1 3 N 8 6 N 11 11 N 5 8


void leftView(Node* root, vector<int> &res){
        
        if(root == NULL){
            return;
        }
        if(root->right == NULL && root->left == NULL)return;
        
        res.push_back(root->data);
        
        if(root ->left) leftView(root->left, res);
        else{
            leftView(root->right, res);
        }
        
    }
    
    void leafNode(Node* root, vector<int> &res){
        
        if(root==NULL)
            return;
            
        if(root->right == NULL && root->left == NULL){
            
            res.push_back(root->data);
            return;
        }
        
        leafNode(root->left, res);
        leafNode(root->right, res);
        
    }

 void rightView(Node* root, vector<int> &res){
        if(root == NULL){
            return;
        }
        if(root->right == NULL &&  root->left == NULL)return;
        if(root ->right) rightView(root->right, res);
        else{
            rightView(root->left, res);
        }
        
        res.push_back(root->data);
    } 
    


vector <int> boundary(Node *root)
    {
        //Your code here
        vector< int > res;
        if(root == NULL) return res;
        
        res.push_back(root->data);
        
        leftView(root->left, res);
        
        leafNode(root->left, res);
        leafNode(root->right, res);
        
        rightView(root->right, res);
        
        return res;
        
    }


// here > the boundry requires us to print the boundry nodes including LEFT, leafNodeS, and RIGHT-NODES also 

// SO AS WE CREATED LEFT, leafNode AND RIGHT-VIEW NODE functions to simple print/ store in vector to them 