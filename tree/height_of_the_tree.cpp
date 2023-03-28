

// don't do this afterwards /

// int show(Node* root,int count, int Count){
        
//         if(root->left != NULL) {
//             show(root->left, count+1, Count);
//         }
//         if(root->right != NULL) {
//             show(root->right,count,  Count+1);
//         }
//         return 1+max(count, Count);
        
        
//     }


// code 

int height(struct Node* node){
        
        // code here 
       if(node==NULL)return 0;

       int lh=height(node->left);

       int rh=height(node->right);

       return (max(lh,rh) + 1);
        
}