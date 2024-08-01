class Solution {
  public:
    // Function to get the maximum width of a binary tree.
    int getMaxWidth(Node* root) {

        // Your code here
        vector<int> res;
        
        if(!root)return{};
        queue<Node*> q;
        q.push(root);
        while(!q.empty()){
            
            int size = q.size();
            vector<int> ans;
            
            while(size--){
                
                Node* val = q.front();
                q.pop();
                ans.push_back(val->data);
                
                if(val->left) q.push(val->left);
                if(val->right) q.push(val->right);
                
            }
            res.push_back(ans.size());
            ans = {};
        }
        
        
        sort(res.begin(), res.end());
        int n = res.size();
        return res[n-1];
        
        
    }
};