class Solution
{
    public:
    int countSubstring(string S)
    {
        int res =0 , sum =0;
        unordered_map<int, int> ans;
        for(int i=0; i<S.length(); i++){
            
            if(isupper(S[i])) sum++;
            else sum--;
            if(sum == 0) res++;
            if(ans[sum])res+=ans[sum];
            ans[sum]++;
            
        }
        return res;
        
    }
};