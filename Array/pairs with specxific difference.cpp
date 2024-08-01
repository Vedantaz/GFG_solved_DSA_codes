public:
    int maxSumPairWithDifferenceLessThanK(int arr[], int n, int k)
    {
        // Your code goes here  
        sort(arr, arr+n);
        int count=0;
        for(int i=n-1;i>0;i--){
            int front=i-1;
            if(arr[i] -arr[front] < k){
                count += arr[front] + arr[i];
                --i;
            }
        }
        return count;
    }