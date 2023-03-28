lass Solution {
  public:
    // Function to detect cycle in an undirected graph.

    bool cycle(int s,int pr,  vector<bool> &visited,  vector<int> adj[]){
        
        visited[s] = true;
        
        for(auto x: adj[s]){
            if(!visited[x]){
                if(cycle(x,s, visited,  adj)) return true;
                
            }
            else if(x!= pr  ){
                return true;
                
            }
        }
        return false;
        

    }
    
    bool isCycle(int v, vector<int> adj[]) {
        // code here
        
        vector<bool> visited(v, false);
        
        for(int i=0; i<v;i++){
            if(!visited[i]){
                bool ans = cycle(i,-1,  visited,  adj) ;
                if(ans) return true;
                
            }
        }
        return false;
        
    }
};