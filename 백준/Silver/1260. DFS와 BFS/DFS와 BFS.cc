#include<bits/stdc++.h>
using namespace std;
vector<int>adj[1001];
bool vis[1001];

void dfs(int v) {
	vis[v] = true;
	cout << v<<" ";
	for (auto& nxt : adj[v]) {
		if (vis[nxt])continue;
		dfs(nxt);
	}
}
void bfs(int v) {
	queue<int> q;
	q.push(v);
	vis[v] = true;
	while (!q.empty()) {
		int cur = q.front(); q.pop();
		cout << cur << " ";
		for (auto& nxt : adj[cur]) {
			if (vis[nxt])continue;
			vis[nxt] = true;
			q.push(nxt);
		}
	}
}
int main(void) {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int n, m,v;
	cin >> n >> m>>v;
	for (int i = 0; i < m; i++) {
		int u, e;
		cin >> u >> e;
		adj[u].push_back(e);
		adj[e].push_back(u);
	}
	for (int i = 1; i <=n; i++)sort(adj[i].begin(), adj[i].end());
	dfs(v);
	fill(vis, vis + n+1, 0);
	cout << "\n";
	bfs(v);
}