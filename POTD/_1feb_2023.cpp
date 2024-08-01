// distinct coloring 

vector<vector<long long int>>dp;
    long long int take(int r[],int g[], int b[], int i, int prev ){
        if(i<0) return 0;
        
        if(dp[i][prev]!= -1) return dp[i][prev];
        
        long long int ans = LLONG_MAX;    
        if(prev ==0){
            ans = min(ans, g[i]+take(r,g,b,i-1,1));
            ans = min(ans, b[i]+take(r,g,b,i-1,2));
        }
        if(prev ==1){
            ans = min(ans, r[i]+take(r,g,b,i-1,0));
            ans = min(ans, b[i]+take(r,g,b,i-1,2));
        }
        if(prev ==2){
            ans = min(ans, r[i]+take(r,g,b,i-1,0));
            ans = min(ans, g[i]+take(r,g,b,i-1,1));
        }
        // return dp[i][prev]=ans;
        return dp[i][prev]=ans;
        
    }
    long long int distinctColoring(int N, int r[], int g[], int b[]){
        // code here 
        dp=vector<vector<long long int>>(N, vector<long long int> (3 , -1));
        long long int ans = LLONG_MAX; 
        for(int i=0; i< 3; i++)
        {
            ans = min(ans, take(r,g,b,N-1,i));
        }
        return ans;
        
    }
};



