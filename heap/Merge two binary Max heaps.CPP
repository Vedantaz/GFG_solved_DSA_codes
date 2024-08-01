class Solution{
    public:
    
    vector<int> mergeHeaps(vector<int> &a, vector<int> &b, int n, int m) {
        // your code here

        // MOST OPTIMAL SOLUTION WITH EASY CODE
        // vector<int>res;
        // for(auto i:a){
        //     res.push_back(i);
        // }
        // for(auto i:b){
        //     res.push_back(i);
        // }
        // sort(res.begin(),res.end(),greater<int>());
        // return res;
        
        // OPTIMAL CODE EASY AND COMPLETE SOLUTION WITHOUT USING HEAP
         int i=0,j=0;
         vector<int>merged;
         
         while(i<n && j<m)
         {
             if(a[i]>=b[j])
             merged.push_back(a[i++]);
             else
             merged.push_back(b[j++]);
         }
         
         while(i<n)
         merged.push_back(a[i++]);
         
         while(j<m)
         merged.push_back(b[j++]);
         
         return merged;
         
        
    }
};