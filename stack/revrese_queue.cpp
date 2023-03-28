queue<int> rev(queue<int> q)
{
    // add code here.
    stack <int> s;
    
    while(!q.empty()){
        s.push(q.front());
        q.pop();
        
        
    }
    queue <int> res;
    int l = s.size();
    for(int i=0; i<l; i++){
        res.push(s.top());
        s.pop();
        
    }
    return res;
    
}