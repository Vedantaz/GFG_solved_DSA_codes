class Solution {
  public:
    long long solve(int n, int k, vector<long long> arr) {
        // code here
        
        long long res =0 ;
        for(int i=0 ; i<k; i++){
            if(i==n-1){
                return arr[i];
                
            }
            res += arr[i];
            
        }
        arr.push_back(res);
        
        int i=0, j=k;
        
        while(j!= n){
            res -= arr[i];
            res += arr[j];
            arr.push_back(res);
            
            i++, j++;
            
        }
        return arr[n-1];
        
        
        
    }
};