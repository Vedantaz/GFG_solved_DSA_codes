class Solution {
public:
    

    bool validPath(int n, vector<vector<int>>& edges, int start, int end) {
        
        unordered_map<int, vector<int>> res;
        for(auto x : edges){
            vector<int> temp = x; // taking  just 2 elements in vector  at each iteration

            int u = temp[0];
            int v = temp[1];

            res[u].push_back(v);
            res[v].push_back(u);
        }
        vector<bool> visited(n+1, false);

        queue<int> q;
        q.push(start);
        visited[start] = true;

        while(!q.empty()){
            int v  = q.front();
            q.pop();
            vector<int> temp = res[v];
            for(int i=0; i<temp.size();i++){

                    int vertex = temp[i];

                    if(visited[vertex] == false ) visited[vertex] = true; q.push(vertex);

            }
            if(visited[end]) return visited[end];

        }
        return visited[end];
        
    }
};


