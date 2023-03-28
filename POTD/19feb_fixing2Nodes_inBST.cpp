
// // trying zigzag level order traversal code

// vector<vector<int>> zigzag(TreeNode* root, ){
//     vector<vector<int>> get;
//     queue<TreeNode*> q;
//     q.push(root);
//     int count =0 ;
//     if(root == NULL ) return get;

//     while(true){
//         int size = q.size();
//         if(size == 0) return get;
//         count++;
//         vector <int> res;
//         while(size>0){
//             TreeNode* cal = q.front();
//             q.pop();
//             res.push_back(cal->val);

//             if(cal->left) res.push_back(cal->left);
//             if(cal->right) res.push_back(cal->right);

//             size--;

//         }
//         if(count%2 == 0) reverse(res.begin(),res.end());

//         get.push_back(res;)

//     }
//     return get;


// }