#include <unordered_map>
class Solution{
    public:
    unordered_map<int,int> mp;
    int firstNonRepeating(int arr[], int n) 
    { 
        // Complete the function
        
        for(int i=0; i<n;i++){
           
            mp[arr[i]]++;
            
        }
        
        for (int i=0; i<n; i++) {
            
            
            int key = arr[i];
            auto temp = mp.find(key);
            if(temp->second == 1) return key;
            
            
        }
        return 0;
        
        
        
    } 
  
};