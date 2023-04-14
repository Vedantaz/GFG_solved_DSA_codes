vector<int> singleNumber(vector<int> nums) 
    {
        // Code here.
        
        map<int, int> res;
        for(int i=0; i<nums.size(); i++){
            
            res[nums[i]]++;
            
        }
        vector<int> ans;
        for(auto x: res){
            
            int val = x.first;
            int freq = x.second;
            
            if(freq == 1) ans.push_back(val); 
        }
        return ans;
        
        
    }