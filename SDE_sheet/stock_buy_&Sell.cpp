
class Solution{
public:
    //Function to find the days of buying and selling stock for max profit.
    vector<vector<int> > stockBuySell(vector<int> A, int N){
        // code here
        vector<vector<int>>profit;
        for(int i=1;i<N;i++){
            if(A[i]>A[i-1])
                profit.push_back({i-1,i});
        }
        return profit;
    }
};