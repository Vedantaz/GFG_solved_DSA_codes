 bool areRotations(string s1,string s2)
    {
       // Your code here
       if(s1.size()!=s2.size())
        return false;
       return (s1+s1).find(s2)!=string::npos;
    
    }