class Solution{
public:
    int minimumTime(int N,int cur,vector<int> &pos,vector<int> &time){
        vector<int> res;
        for(int i=0; i<N; i++){
            
            res.push_back(abs(cur-pos[i])*time[i]);
            
        }
        sort(res.begin(), res.end());
        return res[0];
        
        
    }
};  