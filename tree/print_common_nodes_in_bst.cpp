 void inOrder(Node*root,vector<int>&v)

    {   
        if(root == NULL) return;
        
        inOrder(root->left,v);
        v.push_back(root->data);
        inOrder(root->right,v);

    }

    //Function to find the nodes that are common in both BST. 
    vector <int> findCommon(Node *root1, Node *root2)

    {

      set<int>s;
      int a;

      vector<int>v1,v2;
      vector<int>v;
      inOrder(root1,v1);
      
      int n = v1.size();
      
      for(int i = 0;i<n;i++)
      {
          s.insert(v1[i]);
      }

      inOrder(root2,v2);

      int n2 = v2.size();

      for(int j=0;j<n2;j++)
      {
         a =  s.count(v2[j]);
         if(a == 1)
         v.push_back(v2[j]);
      }
      return v;
     
    }