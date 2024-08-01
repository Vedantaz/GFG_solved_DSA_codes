class Solution{
  public:
    /*You are required to complete below method */
    int maxLevelSum(Node* root) {
        // Your code here
        if(root == NULL) return 0;
        vector<vector<int>> res;
        queue<Node*>q;
        q.push(root);
        while(!q.empty()){
            vector<int> v;
            int size = q.size();
            for(int i=0;i<size;i++){
                Node *node = q.front();
                q.pop();
                if(node->left) q.push(node->left);
                
                if(node->right) q.push(node->right);
                v.push_back(node->data);
            }
            res.push_back(v);
            
        }
        int maxsum=0;
        for(int i=0;i<res.size();i++){
            int sum=0;
            for(int j=0;j<res[i].size();j++){
                sum+=res[i][j];
                
            }
            if(i==0) maxsum=sum;
            if(sum>maxsum) maxsum=sum;
        }
        return maxsum;
    }
};