unordered_set<int> s;

int inOrderCount(Node* root,int count){
    if(root != NULL) {
        
    
        inOrderCount(root->left, count-1);
        // count += 1; 
        s.insert(count);
        inOrderCount(root->right, count+1);
    }
    return s.size();
    
}

int verticalWidth(Node* root)
{
    // Code here
    s.clear();
    inOrderCount(root, 0);
    return s.size();
    
    
}