class Solution{
  public:
    vector<int> duplicates(int arr[], int n) {
        // code here
        unordered_map<int, int>res;
        vector<int> ans;
        
        for(int i=0; i<n;i++){
            int val = arr[i];
            res[arr[i]]++;
        }
        for(auto x: res){
            int freq = x.second;
            int val = x.first;
            if(freq > 1) ans.push_back(val);
        }
        sort(ans.begin(), ans.end());
        if(ans.size() == 0) return {-1};
        
        return ans;
    }
};
