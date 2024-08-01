// 15 10 16 1 14 N 81 N 8 12 N 63 94
// 14

// 1 2 3
// 2

// 4 8 10 12 14 20 22
// 8

void helper(Node *root, Node *x, Node* &ans) {      

        if(!root)   return;

        if(!ans && root->data  > x->data) ans=root;

        else if(ans!=NULL && root->data < ans->data && root->data > x->data) ans=root;  

        helper(root->left, x, ans);

        helper(root->right, x, ans);

    }

    Node *inOrderSuccessor(Node *root, Node *x)

    {

        Node* ans=NULL;

        helper(root, x, ans);

        return ans;

    }

    // need to write a better code to understand. 