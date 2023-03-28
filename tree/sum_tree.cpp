// 62 16 15 N 8 4 7 N 8 4

// 10 20 30 10 10

// 3 2 1

class Solution
{
    public:
    bool isSumTree(Node* root)
    {
         // Your code here
         if(root == NULL) return true;
         isSumTree(root->left);
         isSumTree(root->right);
         
         if(root ->left == NULL && root->right == NULL){
             return true;
         }
         
         int sum = 0;
         if(root->left) sum+=root->left->data;
         if(root->right) sum += root->right->data;
         if(root->data != sum) return false;
         root->data += sum;
         
         return true;
         
    }
};