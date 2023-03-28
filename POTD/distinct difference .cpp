class Solution {
public:
    vector<int> getDistinctDifference(int n, vector<int> &a) {
        
        // code here
        unordered_set<int> s;
    
        vector<int> left(n,0), right(n,0), res;
        
        for(int i=0; i<n;i++){
            
            left[i] = s.size();
            s.insert(a[i]);
            
        }
        s.clear();
        for(int i=n-1; i>=0;i--){
            
            right[i] = s.size();
            s.insert(a[i]);
            
        }
        s.clear();
        for(int i=0; i<n; i++){
            res.push_back(left[i]-right[i]);
        }
        return res;
        
    }
};
