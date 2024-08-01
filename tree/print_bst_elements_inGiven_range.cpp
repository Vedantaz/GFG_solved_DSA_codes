
// for segmentation fault error while inOrder(root->left) :
// we just applied the condition of if(root) and we passed the test cases..



void inOrder( vector<int> &res , Node* root, int low, int high)
    {
        if(root){
            
            inOrder(res, root->left, low, high);
            if(root->data <= high && root->data >= low) res.push_back(root->data);
            inOrder(res, root->right, low, high);
        }
        return;
        
        
    }
    vector<int> printNearNodes(Node *root, int low, int high) {
        //code here 
        vector<int> res;
        inOrder(res, root, low, high);
        return res;
        
    }