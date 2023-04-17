#include<bits/stdc++.h>
using namespace std;
#define X first
#define Y second
const int INF = 1e9 + 10;
int tox[1005][1005]; //각 마을에서 X로 가는 가중치 저장한다!
int toh[1005];
vector<pair<int, int>> adj[10005];
int main(void) {
	ios::sync_with_stdio(false); cin.tie(0);
	int n, m, x;
	cin >> n >> m >> x;
	//여기에서 x는 시작점이 아닌, 파티 지점을 의미한다!
	fill(&tox[0][0], &tox[n+1][n+1],INF);
	fill(toh, toh + n + 1, INF);

	for (int i = 0; i < m; i++) {
		int u, v, t;
		cin >> u >> v >> t;
		adj[u].push_back({ t,v });
	}

	for(int i=1;i<=n;i++){
		priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>>pq;
		tox[i][i] = 0;
		//x=가중치,y=vertex;
		pq.push({ tox[i][i],i });
		while (!pq.empty()) {
			auto cur = pq.top(); pq.pop();
			if (tox[i][cur.Y] != cur.X)continue;
			for (auto& nxt : adj[cur.Y]) {
				if (tox[i][nxt.Y] <= tox[i][cur.Y] + nxt.X)continue;
				tox[i][nxt.Y] = tox[i][cur.Y] + nxt.X;
				pq.push({ tox[i][nxt.Y],nxt.Y });
			}

		}
		toh[x] = 0;
		pq.push({ toh[x],x });
		while (!pq.empty()) {
			auto cur = pq.top(); pq.pop();
			if (toh[cur.Y] != cur.X)continue;
			for (auto& nxt : adj[cur.Y]) {
				if (toh[nxt.Y] <= toh[cur.Y] + nxt.X)continue;
				toh[nxt.Y] = toh[cur.Y] + nxt.X;
				pq.push({ toh[nxt.Y],nxt.Y });
			}
		}
	}
	int max_dis = 0;
	for (int i = 1; i <= n; i++) {
		max_dis = max(max_dis, tox[i][x] + toh[i]);

	}
	cout << max_dis;
}
