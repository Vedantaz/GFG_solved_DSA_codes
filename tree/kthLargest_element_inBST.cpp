// NOTE:


// root->data cn't be get at man function you have to write , just made a void function and add element in vector array

// Also here > vector <int> &ans not just ans -> because the address path is given so that no copy generated and changes will be done on original value


// my code
4 2 9
2

78 69 80 4 72 79
5
class Solution
{
    public:
    // my incorrect code
    // int kthLargest(Node *root, int k)
    // {
    //     //Your code here
    //     vector<int> res;
    //     kthLargest(root->left, k);
    //     int count =0;
    //     // res.insert(res.begin(),val);
    //     kthLargest(root->right, k);
    //     return res[k-1];
        
        
    // }

    // correct code 
    void inOrder(Node* root,vector<int> &ans){
        if(root==NULL)
        return ;
        inOrder(root->left,ans);
        ans.push_back(root->data);
        inOrder(root->right,ans);
    }
    int kthLargest(Node *root, int K)
    {
        //Your code here
        vector<int> ans;
        inOrder(root,ans);
        int n=ans.size();    // size of vector array 
        return ans[n-K];    // from the behind we have to get out of the vector array 
    }
};


