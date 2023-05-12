#include<bits/stdc++.h>
using namespace std;
vector<int> adj[51];
vector<int> result;
int point[51],dist[51];
int bfs(int start) {
	queue<int> q;
	q.push(start);
	dist[start] = 0;
	int ret = 0;
	while (!q.empty()) {
		int cur = q.front(); q.pop();
		for (auto& nxt : adj[cur]) {
			if (dist[nxt] >=0)continue;
			dist[nxt] = dist[cur] + 1;
			ret = max(ret,dist[nxt]);
			q.push(nxt);

		}
	}
	return ret;
}
int main(void) {
	ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	int v;
	cin >> v;
	int v1 = 1, u = 1;
	while (v1 + u > 0) {
		cin >> v1 >> u;
		if (v1 > 0 && u > 0) {
			adj[v1].push_back(u);
			adj[u].push_back(v1);
		}
	}
	int mins = 100;
	for (int i = 1; i <= v; i++) {
		fill(dist, dist + 51, -1);
		point[i]=bfs(i);	
		mins = min(mins, point[i]);
	}
	//point에 가장 작은 애들부터 모임!
	for (int i = 1; i <= v; i++)if(mins==point[i]) result.push_back(i);
	cout << mins << " " << result.size() << "\n";
	for (auto& c : result)cout << c << " ";
}