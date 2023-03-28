 void Mid(vector<int> &nums, vector<int> &ans, int start, int finish){
        
        if(start>finish)return ;
        int mid = (start+finish)/2;
        ans.push_back(nums[mid]);
        
        Mid(nums,ans, start, mid-1);
        Mid(nums,ans,  mid+1, finish);
        
    };

    vector<int> sortedArrayToBST(vector<int>& nums) {
        // Code here
        vector<int> ans;
        
        int start=0, finish = nums.size()-1;
        Mid(nums, ans, start, finish);
        return ans;
        
    }