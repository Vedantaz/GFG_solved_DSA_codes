// 3
// 7 86 64
// 19

// 7
// 2 81 87 42 66 90 45
// 87


bool search(Node* root, int x) {
    // Your code here
    if(root == NULL) return 0;     // this condition is very basic and imp also.. 
    if(x > root->data)search(root->right, x);
    else if (x<root->data) search(root->left, x);
    else if(x == root->data) return 1;


    if(root == NULL ) return 0;
    else if(x>root->data) search(root->right, z);
    