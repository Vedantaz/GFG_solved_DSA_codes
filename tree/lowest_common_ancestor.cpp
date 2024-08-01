// 5 4 6 3 N N 7 N N N 8
// 7 8

// 2 1 3 
// 1 2

// 2 1 3 
// 1 3

// my incorrect code > 

   Node* result = root;
   int n = min(n1,n2);
   int m = max(n1, n2);
   int res = root->data;
   if(root->data > n)LCA(root->left, n1,n2);
   else if(root->data < n)LCA(root->right, n1,n2);
   else if(root->data == n && res < m) return result;
   else if(root->data == n && res > n) return root;
   else if(root->data == n && res == m) return result;
   
// correct code


Node* LCA(Node *root, int n1, int n2)
{
   //Your code here

   if(root->data > n1 && root->data > n2)
   return LCA(root->left,n1,n2);
   if(root->data < n1  && root->data < n2)
   return LCA(root->right,n1,n2);
   return root;
   
}