void QueueStack :: push(int x)
{
        // Your Code
       
        // q1 push x
        q1.push(x);
        int n = q1.size();
        
        // q1 -> q2
        for(int i=0; i<n-1; i++){
            int c = q1.front();
            q1.pop();
            q1.push(c);
            
            
            
        }
        
}

//Function to pop an element from stack using two queues. 
int QueueStack :: pop()
{
        // Your Code    
        if(q1.empty()) return -1;
        
        int val = q1.front();
        q1.pop();
        return val;
        
        
        
        
}