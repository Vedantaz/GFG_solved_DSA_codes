void inOrder(Node* root,vector<int> &ans){
        if(root==NULL)
        return ;
        inOrder(root->left,ans);
        ans.push_back(root->data);
        inOrder(root->right,ans);
    }
    int kthLargest(Node *root, int K)
    {
        //Your code here
        vector<int> ans;
        inOrder(root,ans);
        int n=ans.size();    // size of vector array 
        return ans[k-1];    // from the behind we have to get out of the vector array 
    }