 long long maxSum(vector<int>& arr) {
        // sort it, place 1 max, 1 min together to get max output
        long long int sum=0, n=arr.size();
        sort(arr.begin(),arr.end());
        
        for(int i=0;i<n/2;i++){
           sum+=abs(arr[i]-arr[n-i-1]);
        }
        return 2*sum;    
    }