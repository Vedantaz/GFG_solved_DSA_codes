 bool areRotations(string s1,string s2)
    {
<<<<<<< HEAD
       // Your code here
=======
        // Your code here
        
>>>>>>> fc687de48ecb85f65afcd96cf30837de80cabf9a
       if(s1.size()!=s2.size())
        return false;
       return (s1+s1).find(s2)!=string::npos;
    
    }