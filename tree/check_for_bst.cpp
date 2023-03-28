// https://practice.geeksforgeeks.org/problems/check-for-bst/1?page=1&category[]=Binary%20Search%20Tree&sortBy=submissions


// solve it tomorrow..

bool check(Node* root,int min,int max){
        if(root==NULL) return true;
        if(root->data >= min && root->data <= max){
            bool left=check(root->left,min,root->data);
            bool right=check(root->right,root->data,max);
            return left && right;
        }
        else return false;
    }