class solution {
public:
    // Function to return a list containing the DFS traversal of the graph.
    void dfs(int node, vector<int> adj[], int vis[], vector<int> &ls) {
        
        vis[node] = 1; 
        ls.push_back(node); 
        // traverse all its neighbours
        for(auto it : adj[node]) {
            // if the neighbour is not visited
            if(!vis[it]) {
                dfs(it, adj, vis, ls); 
            }
        }
    }
    
    vector<int> dfsOfGraph(int V, vector<int> adj[]) {
        // Code here
        int vis[V] = {0}; 
        int start = 0;
        // create a list to store dfs
        vector<int> ls; 
        // call dfs for starting node
        dfs(start, adj, vis, ls); 
        return ls; 
        
    }
};


map<int, int> res;

for(int i=0; i<n-1;i++){
    res[s[i]]++;
res[a[i]]+=1 ; 
or res[a[i]] = 1;

if(res.find(a[i]) != res.end()) // o(1)
res[a[i]]

}


#include <iostream>
using namespace std;

int main(){
    int a[] = {2,3,2,1,5};
    int n = sizeof(a)/sizeof(a[0]);

    for(int i=0; i<n;i++){
        
    }
    return 0;
}