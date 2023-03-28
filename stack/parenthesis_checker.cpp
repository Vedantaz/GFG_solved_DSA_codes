

// every easy code is the hardest code ever 
// here it is very easy 
// just remember : in this type of problem : always empheasize every possibility of one condition 
// like if it is false : then give their all porssible conditions 
// else it is true 
// or vice versa
bool isPar(string x)
    {
        // Your code here
        stack<char> s;
        if(x.size()%2 == 1) return false;
        
        for(int i=0; i<x.size(); i++){
                if(x[i] == '[' || x[i] == '{' || x[i] == '(')
                {
                    s.push(x[i]);
                }
                else {
                    if(s.size() == 0)return false;
                    char ch = s.top();
                    if(x[i] == ')' && ch != '(') return false;
                    else if(x[i] == ']' && ch != '[') return false;
                    else if(x[i] == '}' && ch != '{') return false;
                    s.pop();
                    
                    
                    
                }
                
        }
        
       if(s.empty()) return true;
       return false;

    }