
class Solution{
    public:
    int minSubset(vector<int> &arr,int n){
        sort(arr.begin(), arr.end());
        // min, max chya logic ni
        long sum=0;
        for(auto i:arr){
            sum+=i;
        }
        int count=0;
        long val=0;
        for(int i=n-1;i>=0;i--){
            if(val>sum)break;
            
            else{
                val+=arr[i];
                sum-=arr[i];
                count++;
            }
        }
        return count;
    }
};