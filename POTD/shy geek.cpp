class Solution{
    public:
    Shop shop;
    Solution(Shop s)
    {
        this->shop = s;
    }
    long long find(int n, long k){
        // Return the number of chocolates Geek had
        // enjoyed out of 'n' chocolates availabe in the
        // 'shop'.
        long long ans =0;
        long long l =0;
        long long r =n-1;
        
        while(r>=0 && k>0){
            l=0;
            long long index = -1;
            long long indexVal;
            while(l<=r){
                long long mid = (l+r)/2;
                long long midVal = shop.get(mid);
                if(midVal<=k){
                    index = mid;
                    indexVal = midVal;
                    l = mid+1;
                }
                else{
                    r = mid-1;
                    
                }
            }
            ans+= (k/indexVal);
            k = k%indexVal;
            r = index-1;
            
        }
        return ans;
    }

};