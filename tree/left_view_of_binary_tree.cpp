// 4 5 2 N N 3 1 6 7

// 10 20 30 40 50 60 70 80 90

//  1 2 3 4 5 6 7 8

void view(Node* root, int level, int *maxLevel, vector<int> &res){
    
    if(root == NULL) return;
    
    if(*maxLevel < level) {
        
        *maxLevel = level;
        res.push_back(root->data);
        
    }
    view(root->left, level+1, maxLevel, res);
    view(root->right, level+1, maxLevel, res);
    
}

vector<int> leftView(Node *root)
{
     int maxLevel=0;
     vector<int> res;
     view(root, 1, &maxLevel, res);
     return res;
    
}