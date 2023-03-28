class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        
        // to find the element which has in-out = n-1;

        vector<int>  data(n+1, 0);
        for(auto x: trust){
            data[x[0]]--;
            data[x[1]]++;       /// don't think much , this is just -> arranging the + & - value at index positions

        }
        for(int i=1;i<=n;i++){
            int x = data[i];
            if(x == n-1){
                return i;
            }
        }
        return -1;


    }
};