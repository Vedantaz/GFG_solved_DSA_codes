class Solution {
  public:
    string armstrongNumber(int n){
        long int res;
        int val = n;
        while (n>0)
        {
            int digit = n%10;
            n /= 10;
            res += pow(digit, 3);
        }
        
        if(res == val){
            return "Yes";
        }
        return "No";
    }
};