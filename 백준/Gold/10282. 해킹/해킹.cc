#include<bits/stdc++.h>
using namespace std;
#define X first
#define Y second
const int INF = 1e9 + 10;
int d[10005] = { 0, };


int main(void) {
	ios::sync_with_stdio(false); cin.tie(0);
	int n;
	cin >> n;
	while (n--) {
		vector<pair<int, int>> adj[10005];
		int v, e, st;
		cin >> v >> e >> st;

		fill(d, d + v + 1, INF);

		for (int i = 0; i < e; i++) {
			int u, v, w;
			cin >> u >> v >> w;
			adj[v].push_back({ w,u });
		}

		priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;

		d[st] = 0;
		pq.push({ d[st],st});
		while(!pq.empty()) {
			//X=가중치, Y=vertex;
			auto cur = pq.top(); pq.pop();
			if (d[cur.Y] != cur.X)continue;
			for (auto& nxt : adj[cur.Y]) {
				if (d[nxt.Y] <= d[cur.Y] + nxt.X)continue;
				d[nxt.Y] = d[cur.Y] + nxt.X;
				pq.push({ d[nxt.Y],nxt.Y });

			}
		}
		int max_num=0,cnt = 0;
		for (int i = 1; i <= v; i++) {
			if (d[i] != INF) {
				cnt++;
				max_num = max(max_num, d[i]);
			}
		}
		cout << cnt << " " << max_num<< "\n";
	}
}
