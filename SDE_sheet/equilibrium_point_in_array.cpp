// 42
// 4 42 27 16 28 3 4 5 9 3 31 5 5 29 10 18 35 35 33 19 41 23 8 32 9 5 8 18 35 13 6 7 6 10 11 13 37 2 25 7 28 43
// 5
// 1 3 5 2 2
// 1
// 1
// 9
// 1 2 9 8 7 6 5 4 5 
// 30
// 20 17 42 25 32 32 30 32 37 9 2 33 31 17 14 40 9 12 36 21 8 33 6 6 10 37 12 26 21 3


class Solution{
public:
    //Function to find the days of buying and selling stock for max profit.
    int equilibriumPoint(long long a[], int n) {
    
        // Your code here
        int i=0, j=n-1, res_i=0,res_j=0;
        if(n==1) return 1;
        while(i<=j){
            if(res_i==res_j && i==j){
                return i+1;
            }
            if(res_i<res_j){
                res_i+=a[i];
                i++;
            }
            else{
                res_j+=a[j];
                j--;
            }
        }
        return -1;
    
    }
}