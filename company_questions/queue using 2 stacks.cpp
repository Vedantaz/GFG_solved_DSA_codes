int StackQueue :: pop()
{
        // Your Code       
        if(s1.empty() && s2.empty()) return -1;
        if(s2.empty()){
            
            while(!s1.empty()){
                s2.push(s1.top());
                s1.pop();
            }
        }
        int ans =s2.top();
        s2.pop();
        while(!s2.empty()){
            
            s1.push(s2.top());
            s2.pop();
            
        }
        
        
        return ans;
}