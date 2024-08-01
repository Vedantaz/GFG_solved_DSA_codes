class Solution{   
  public:
    string secondSmallest(int s, int d){
        // code here 
        // factors padave lagel  = no.p of d of s;
        
        if(s >= d*9){
            return "-1";
            
        }
        string ans = "";
        s -=1;
        for(int i=0; i<d-1;i++){
            
            if(s>9){
                ans += (9 + '0');
                s-=9;
                
            }
            else{
                ans += (s+'0');
                s=0;
            }
            
        }
        ans += (s+1)+'0';
        
        reverse(ans.begin(), ans.end());
        int index = d-1;
        
        for(int i= d-1; i>= 0;i--){
            
            if(ans[i] == '9') index = i;
            
            else break;
        }
        
                        
        ans[index]-=1;
        ans[index-1] += 1;
        return ans;
    }
};