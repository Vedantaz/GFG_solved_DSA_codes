class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        
        vector<int> res;
        map<int,int> mp;


        for(auto x:nums){
            mp[x]++;

        }
        sort(nums.begin(), nums.end(), [&](int a, int b)
         { return mp[a]!= mp[b] ? mp[a]<mp[b] : a>b; });

        return nums;
        
        
       

    }
};