class Solution {
public:
    void sortFunc(vector<int> & nums,int n){
        int i, j, min_idx;
        for (i = 0; i < n-1; i++) {
            min_idx = i;
            for (j = i+1; j < n; j++) {
                    if (nums[j] < nums[min_idx]) {
                        min_idx = j;
                    }
            }
            if (min_idx != i) {
                swap(nums[i], nums[min_idx]);
            }
        }
    }
    string largestNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end(),[&](const int& a,const int& b){
            string s1 = to_string(a) + to_string(b);
            string s2 = to_string(b) + to_string(a);
            return s1 > s2;
        });
        string ans = "";
        for(auto& c:nums){
            ans += to_string(c);
        }
        if(ans[0]=='0'){
            return "0";
        }
        return ans;
    }
};