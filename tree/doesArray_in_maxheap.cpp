// 7
// 74 63 71 97 82 6 26

// 6
// 90 15 10 7 12 2


class Solution{
    public:
    struct Node{
        int data;
        Node* left, * right;
    }
    Node* newNode(int data){
        Node* node = (Node*)malloc(sizeof(Node));  // allocating the memory
        node->data = data;
        node->left = node->right = NULL;
        return (node);

    }

    bool inOrder(){
        if(root == NULL) return root;
        inOrder(root->left);
        cout<<root->data<<" ";
        inOrder(root->right);
        else return false;
        return true;
        
    }
    
    bool preOrder(){
        if(root == NULL) return root;
        cout<<root->data<<" ";
        preOrder(root->left);
        preOrder(root->right);
        else return false;
        return true;

    }

    bool postOrder(){
        f(root == NULL) return root;
        postOrder(root->left);
        postOrder(root->right);
        cout<<root->data<<" ";
        else return false;
        return true;

    }
    bool isMaxHeap(int a[], int n)
    {
        // Your code goes here
        for(int i=0; i<n;i++){
            if(a[i] < a[2*i+1] || a[i] > a[2*i+2]){
                return false;
            }
            if(2*i+1 == n || 2*i+2 == n)break;
        }
        return true;
       
    }
};

// https://practice.geeksforgeeks.org/problems/does-array-represent-heap4345/1?page=1&difficulty[]=-2&difficulty[]=-1&category[]=Binary%20Search%20Tree&sortBy=submissions