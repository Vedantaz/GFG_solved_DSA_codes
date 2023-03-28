void inOrder(vector<int> &res, Node* root){
    if(root){
        inOrder( res, root->left);
        res.push_back(root->data);
        inOrder( res, root->right);
        // res.pop();
        
    }
    
    
}
int sum(Node* root, int k) 
{ 
  
    // Your code here
    vector<int> res;
    if(!root) return 0;
    int a=0;
    inOrder(res, root);
    for(int i=0; i<k;i++){
            a+=res[i];
            
    }
    return a;
    
} 