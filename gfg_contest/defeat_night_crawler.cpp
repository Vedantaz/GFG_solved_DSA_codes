int n;
long long res;
vector<int> size;
vector<long long> dp;
vector<vector<int>> g;

int calcsize(int v, int p = -1) {
	size[v] = 1;
	for (auto to : g[v]) {
		if (to == p) continue;
		size[v] += calcsize(to, v);
	}
	return size[v];
}
long long calcdp(int v, int p = -1) {
	dp[v] = size[v];
	for (auto to : g[v]) {
		if (to == p) continue;
		dp[v] += calcdp(to, v);
	}
	return dp[v];
}

void dfs(int v, int p = -1) {
	res = max(res, dp[v]);
	for (auto to : g[v]) {
		if (to == p) continue;
		
		dp[v] -= dp[to];
		dp[v] -= size[to];
		size[v] -= size[to];
		size[to] += size[v];
		dp[to] += size[v];
		dp[to] += dp[v];
		
		dfs(to, v);
		
		dp[to] -= dp[v];
		dp[to] -= size[v];
		size[to] -= size[v];
		size[v] += size[to];
		dp[v] += size[to];
		dp[v] += dp[to];
	}
}
int maxPoints(vector<vector<int>> &edges)
{
    // Your code goes here


   	n=edges.size()+1;
    g = vector<vector<int>>(n);
	for (int i = 0; i < n - 1; ++i) {
		int x, y;
        x=edges[i][0];
        y=edges[i][1];
		--x, --y;
		g[x].push_back(y);
		g[y].push_back(x);
	}
	
	res = 0;
	size = vector<int>(n);
	dp = vector<long long>(n);
	
	calcsize(0);
	calcdp(0);
	dfs(0);
    return res;
}