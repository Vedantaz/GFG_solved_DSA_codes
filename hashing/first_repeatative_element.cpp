#include <unordered_map> 
#include <algorithm>


class Solution {
  public:
    // Function to return the position of the first repeating element.
    int firstRepeated(int arr[], int n) {
        // code here
        unordered_map<int, int> res;
        int value = 0;
        for(int i=0; i<n; i++){
            
            res[arr[i]]++;
            
        }
        
        for(int i=0; i<n; i++){
            
            int key = arr[i];
            
            auto tmp = res.find(key);
            
            if(tmp->second >= 2) return i+1;
            
            
        }
        
        
        return -1;
        
    }
};