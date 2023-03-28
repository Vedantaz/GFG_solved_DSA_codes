vector<vector<int>> printGraph(int v, vector<int> adj[]) {
        // Code here
        vector<vector<int>> res;
        vector<int> ans;
        
        for (int u = 0; u < v; ++u) {
            ans.push_back(u);
    		for (auto v : adj[u]) {
               
            //    cout<<u << " -> " << v<<endl;
                  ans.push_back(v);
                
            }
            res.push_back(ans);
            ans= {};
           
        // cout<<"******** "<<endl;
	    }
        return res;
        
    }