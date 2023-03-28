#include <string>
class Solution{
  public:
  
    //Function to return the name of candidate that received maximum votes.
    vector<string> winner(string arr[],int n)
    {
        // Your code here
        // Return the string containing the name and an integer
        // representing the number of votes the winning candidate got
        
        sort(arr, arr+n);
        
        unordered_map<string, int> res;
        
        vector<string> ans;
        
        int i=0;
        string key="";
        while(n--){
            
            key = arr[i];
            if (res.find(key) != res.end()) {
                res[arr[i]]++;
            } else {
                res[arr[i]] = 1;
            }
            i++;
        
        }
        int maxd =  0;
        string name = "";
        for(auto x= res.begin(); x != res.end(); ++x){
            
            string u = x->first;
            int c = x->second;
            if(c>maxd) 
            {
                
                maxd = c;
                name = u;
                
            }
            else if(c == maxd){
                if(u < name){
                    name = u;
                }
                
            }
            
        }
        ans.push_back(name);
        string t = to_string(maxd);
        ans.push_back(t);
        
        return ans;
        
        
    }
};