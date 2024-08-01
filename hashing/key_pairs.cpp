class Solution{
public:	
	// Function to check if array has 2 elements
	// whose sum is equal to the given value
	bool hasArrayTwoCandidates(int arr[], int n, int x) {
	    // code here
	    unordered_map<int, int> mp;
	    
	    for(int i=0; i<n; i++){
	        mp[arr[i]]++;
	        
	    }
	    
	    for(auto d: mp){
	        
	        int key = d.first;
	        int val = d.second;
	        int pair = x-key;
	        
	        if( pair == key ){
	            
	            if(val >= 2)
	                return true;
	            
	        } 
	        else
	        {
	            if(mp.find(pair) != mp.end())
	            {
	            return true;
	            }
	        }
	        
	    }
	    return false;
	}
};