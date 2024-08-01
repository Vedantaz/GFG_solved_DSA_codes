class Solution
{
    public:    
       vector <int> commonElements (int x[], int y[], int z[], int a, int b, int c)
        {
            //code here.
            set<int> res;
            
            int i=0, k=0, j=0;
            
            while(i<a && j<b && k<c)
            {
                if(x[i] == y[j] && y[j] == z[k]){
                    res.insert(x[i]);
                    i++, j++,k++;
                    
                }
                else if(x[i]<y[j]) i++; 
                
                else if(z[k] > y[j]) j++;
                
                else k++;
                
            }
            // duplicate case here arrives 
            vector<int> ans;
            for(auto x: res){
                ans.push_back(x);
            }
            
            if(ans.size() == 0) return {-1};
            return ans;
            
        }
        

};