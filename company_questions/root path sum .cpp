void traverse( Node* root, int sum, vector<int> & v){
        
        if(root==NULL)return;
    
        sum += root->data;
        
        if(root->left || root->right)
        {
            traverse(root->left,sum,v);
            traverse(root->right,sum,v);
        }
        else
        {
            v.push_back(sum);
        }
        
    }
    bool hasPathSum(Node *root, int S) {
    // Your code here
        vector<int> ans;
        int sum = 0;
        
        traverse(root,sum,ans);
        
        for(int i=0;i<ans.size();i++)
        {
            if(S==ans[i])
            {
                return true;
            }
        }
        
        return false;
    }