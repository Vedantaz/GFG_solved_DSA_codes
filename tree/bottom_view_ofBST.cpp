#include <vector>

vector<int> bottomView(Node *root)
    {
        //Your code here
        vector<int> res;
        if(root == NULL) return res;
        
        map<int, int> mp;          // just like dict
        queue<pair<Node*, int>> q;  // fifo 
        q.push({root, 0});
        
        while(!q.empty()){
            
            Node *node = q.front().first;
            int val = q.front().second;
            q.pop();
            mp[val] = node->data;
            
            
            
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