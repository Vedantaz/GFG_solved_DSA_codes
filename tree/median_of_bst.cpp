// 13 10 18 3 11 15 20 1 6 N 12

// 6 3 8 1 4 7 9

// 6 3 8 1 4 7 

void inOrder(vector<int> &res, Node* root ){
    if(root){
        inOrder(res, root->left);
        res.push_back(root->data);
        inOrder(res, root->right);
    }
    
}
float findMedian(struct Node *root)
{
      if(!root) return 0;
      vector<int> res;
      
      inOrder(res, root);
      
      float ans;
      int med = res.size();
      if(med %2 == 0)
      {
         ans = res[med/2] + res[(med-1)/2]; // this 2 steps are imp to find median value
         return float(ans/2);
      }
      else ans = res[floor(med/2)];
      
      return ans;
}
