vector<int> PosNegPair(int a[], int n) {

        vector<int> pairs, x;
        map<int, int> res;
        
        for(int i=0; i<n; i++){
            
            if(a[i]<0) x.push_back(a[i]);
            else res[a[i]]++;
            
            
        }
        sort(x.begin(), x.end());
        
        
        for(int i = (int)x.size()-1; i>=0; i--){
        
            int val = abs(x[i]);
            if(res[val]>0){
                pairs.push_back(x[i]);
                pairs.push_back(val);
                res[val]-=1;
                
            }
            
        }
        return pairs;
    }