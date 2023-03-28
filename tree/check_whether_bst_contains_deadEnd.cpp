
// wrong cpp solution created by me.
bool inOrder(set<int> &s, Node* root ){
    if(root){
        inOrder(s, root->left);
        if(s.count(root->data) || root->data == 1){
            return false;
        }
        s.insert(root->data);
        inOrder(s, root->right);
    }
    return true;
    
}
bool isDeadEnd(Node *root)
{
    //Your code here
    set<int> s;
    int t;
    cin>>t;
    while(t--){
        if(!root) return false;
        cout<<inOrder(s,root)<<endl;
        t--;
    }
    
  
}

// correct and fast solution >
bool func(Node*root,int min,int max){

    if(!root)return false;

    if(min ==max)return true;

    return func(root->left,min,root->data-1)|| func(root->right,root->data+1,max);

}

bool isDeadEnd(Node *root)

{

    return func(root,1,INT_MAX);

    

}