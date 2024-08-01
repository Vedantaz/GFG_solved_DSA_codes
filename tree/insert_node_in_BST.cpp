Node* insert(Node* root, int key) {
    // Your code here
   if(root == NULL) {
       root = new Node(key);
       return root;
   }
   if(root->data > key) root->left = insert(root->left, key);
   else if(root->data < key) root->right = insert(root->right, key);
  
   return root;
}

// https://practice.geeksforgeeks.org/problems/insert-a-node-in-a-bst/1?page=1&difficulty[]=0&category[]=Binary%20Search%20Tree&sortBy=submissions