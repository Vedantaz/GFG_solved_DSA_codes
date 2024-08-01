vector<int> verticalOrder(Node *root)
    {
        //Your code here
        
        // inOrderCount(root, 0);
        map<int, vector<int>> mp;
        queue<pair<Node*, int>> q;
        q.push({root,0});
        
        while(!q.empty()){
            auto temp = q.front();
            mp[temp.second].push_back(temp.first->data);  // this step is important
            q.pop();
            if(temp.first->left){
                q.push({temp.first->left, temp.second-1});
                
                
            }
            if(temp.first->right){
                q.push({temp.first->right, temp.second+1});
            }
        }
        vector<int> res;
        
        for(auto x:mp){
            for(auto dt:x.second){
                res.push_back(dt);
            }
        }
        
        return res;
            
        }