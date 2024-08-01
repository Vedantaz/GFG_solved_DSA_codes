string isSubset(int a1[], int a2[], int n, int m) {
    
  
    unordered_map<int, int> res, res2;
    for(int i=0; i<n; i++){
        res[a1[i]]++;
        
    }
    for(int i=0; i<m; i++){
        
        res2[a2[i]]++;
        if(res.find(a2[i]) == res.end() || res[a2[i]] < res2[a2[i]]) return "No";
    }
    return "Yes";
}