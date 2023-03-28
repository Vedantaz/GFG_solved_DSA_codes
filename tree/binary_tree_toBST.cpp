// https://practice.geeksforgeeks.org/problems/binary-tree-to-bst/1?page=1&difficulty[]=0&category[]=Binary%20Search%20Tree&sortBy=submissions

// solve it after bath...

void inOrder(Node *root,vector<int> &ans){
      if(root==NULL)
          return;
      inOrder(root->left,ans);
      ans.push_back(root->data);
      inOrder(root->right,ans);
    }
    
    Node *constructBST(vector<int>ans,int start,int end){
      if(start>end)
          return NULL;
      int mid = (start + end)/2;
      Node *root = new Node(ans[mid]);
      root->left = constructBST(ans,start,mid-1);
      root->right = constructBST(ans,mid+1,end);
      return root;
    }
  
    Node *binaryTreeToBST (Node *root)
    {
        //Your code goes here
        if(root==NULL)
            return NULL;
        vector<int>ans;
        inOrder(root,ans);
        sort(ans.begin(),ans.end());      // sort step is imp 
        int n = ans.size();
        return constructBST(ans,0,n-1);
    }