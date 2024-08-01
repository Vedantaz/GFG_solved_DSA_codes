6
sktbbd
5 1 0 3 4 2

4
aabb
2 1 3 0


class Solution {
  public:
    int getMinimumDays(int n,string s, vector<int> &p) {
        // code here
        int count = 0;
        for(int i=1;i<n;i++){
            
            if(s[i] == s[i-1]){
                count++;
                
            }
        }
        
        if(count == 0) return 0;
        
        for(int i=0; i<n;i++){
            
            int index = p[i];
            if(index!=0 and s[index] == s[index-1]){
                count--;
            }
            if(index != n-1 and s[index] == s[index+1]){
                count--;
                
            }
            if(count == 0) return i+1;
            s[index] = '?';
        }
        
        return -1;
        
    }
};