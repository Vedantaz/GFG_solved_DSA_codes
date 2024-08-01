1 2 10 N 3 11 N N 4 12 N 6 N 13 N 7 N 8 N 9. =  8 13 2 1 10

1 2 3  = 2 1 3 

int left(Node* root, vector<int> &res){
        if(root->left == NULL || root== NULL) return res;
        
        left(root->left, res);
        res.push_back(root->data);
        
        
    } 
    int right(Node* root, vector<int> &res){
        if(root->left == NULL || root== NULL) return res;
        
        res.push_back(root->data);
        right(root->right, res);
        
    }
    vector<int> topView(Node *root)
    {
        //Your code here
        vector<int> res;
        if(root == NULL) return res;
        
        left(root->left, res);
        right(root->right, res);
        return res;
    }


    // MY WRONG CODE /////////////////


    // MY correct CODE /////////////////




    vector<int> topView(Node *root)
    {
        //Your code here
        vector<int> res;
        if(root == NULL) return res;
        
        map<int, int> mp;
        queue<pair<Node*, int>> q;
        q.push({root, 0});
        
        while(!q.empty()){
            
            auto curr = q.front();
            q.pop();
            
            Node *node = curr.first;
            int val = curr.second;
            
            if(mp.find(val) == mp.end()){
                mp[val] = node->data;
                    
            }
            
            if(node->left){
                q.push({node->left, val-1});
            }
            if(node->right){
                q.push({node->right, val+1});
            }
            
        }
        for(auto e : mp){
            res.push_back(e.second);
        }
        return res;
        
    }