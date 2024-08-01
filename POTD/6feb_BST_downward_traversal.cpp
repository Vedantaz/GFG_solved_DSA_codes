long long int  sum(Node* root, int target, int count, long long int val){
        // if(root == NULL) return ;
        if(root !=NULL){
            
        
            sum(root->left, target, count-1, val);
            if(count == 0) val+=root->data;
            sum(root->right, target, count+1, val);
        }
        return val;
        
        
        
    }
    long long int verticallyDownBST(Node *root,int target){
        // Code here
        int count=0;
        long long int val=0;
            
        if(root->data < target ) verticallyDownBST(root->right, target);
        else if(root->data > target ) verticallyDownBST(root->left, target);
        
        else return sum(root, target, count, val);
        return val;
        
        
    }

    // my wrong code  
    // just tried to find the root 
    // then go to the left and right of and try to find just below the node by -1 and +1 respectively.

// right code and actually easy and correct code 

class Solution{
public:
    
    void solve(Node *root, int j, map<int, int> &mp){
        mp[j] += root->data;
        if(root->left){
            solve(root->left, j - 1, mp);
        }
        if(root->right){
            solve(root->right, j + 1, mp);
        }
    }
    long long int verticallyDownBST(Node *root,int target){
        // Code here
       // first we find if the node is present on not using BST order i.e greater than node on right and less than on left so it takes log(n) to find. 
        while(root){
            if(root->data == target) break;
            else if(root->data > target){
                root = root->left;
            }
            else{
                root = root->right;
            }
        }
// then checking if node is present or not
        if(root == NULL) return -1;
        map<int, int> mp;
        int temp = root->data;
// using solve function to just map all the element on the jth column, 
        solve(root, 0, mp);
        return mp[0] - temp;
    }
};