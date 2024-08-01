int isSumProperty(Node *root)
    {
     // Add your code here
     if(root == NULL || (root->left == NULL && root->right == NULL)) return 1;
     
     int lSum = 0, rSum =0;
     
     if(root->left !=  NULL) {
         lSum = root->left->data;
         
     } 
     if(root->right !=  NULL) {
         rSum = root->right->data;
         
     }
     
     if(root->data == (lSum + rSum) 
         && isSumProperty(root->left) 
         && isSumProperty(root->right)
     ){
        return 1;         
     }
     else {
         return 0;
     }
    }
    